//
// Created by 1 on 2025/6/2.
//

#ifndef XRTC_SERVER_XRTCSERVER_DEF_H
#define XRTC_SERVER_XRTCSERVER_DEF_H

#define CMDNO_PUSH     1
#define CMDNO_PULL     2
#define CMDNO_ANSWER   3
#define CMDNO_STOPPUSH 4
#define CMDNO_STOPPULL 5

#define MAX_RES_BUF 4096

namespace xrtc {

    struct RtcMsg {
        int cmdno = -1;
        uint64_t uid = 0;
        std::string stream_name;
        int audio = 0;
        int video = 0;
        uint32_t log_id = 0;
        void* worker = nullptr;
        void* conn = nullptr;
        int fd = 0;
        std::string sdp;
        int err_no = 0;
    };

} // namespace xrtc

#endif //XRTC_SERVER_XRTCSERVER_DEF_H
