/* f_0x10067b70 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   copies the string at [this+4] into a 1024-byte stack buffer, appends the string at [arg1+4], then calls FUN_10067990 with arg1 as this and the buffer as its argument, returning arg1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10067b70(Guest* g, uint32_t self, uint32_t arg0, uint32_t arg1)
{
    const uint32_t buf = cow_frame(g, g->esp, 0x400u);

    /* Copy the null-terminated string from [self + 4] into the stack buffer. */
    uint32_t src = rd32(self + 4u);
    uint32_t dst = buf;
    uint32_t len1 = 0u;

    for (;;) {
        const uint32_t c = rd8(src);
        wr8(dst, c);
        ++src;
        ++dst;
        ++len1;
        if (c == 0u) {
            break;
        }
    }

    /*
       repne scasb al, byte ptr es:[edi] with ecx = -1 and al = 0.
       This computes the length of the string at [arg1 + 4], including its
       terminating NUL byte.
    */
    const uint32_t src2 = rd32(arg1 + 4u);
    uint32_t ecx = 0xFFFFFFFFu;
    uint32_t p = src2;

    while (ecx != 0u) {
        const uint32_t c = rd8(p);
        ++p;
        --ecx;
        if (c == 0u) {
            break;
        }
    }

    const uint32_t len2 = ~ecx;

    /*
       The original then scans the copied buffer for its NUL byte.  Since the
       first loop copied exactly len1 bytes including the NUL, the append
       destination is buf + len1 - 1.
    */
    uint32_t dst2 = buf + len1 - 1u;
    uint32_t src3 = src2;

    /* rep movsd dword ptr es:[edi], dword ptr [esi] */
    uint32_t n = len2 >> 2;
    while (n != 0u) {
        wr32(dst2, rd32(src3));
        dst2 += 4u;
        src3 += 4u;
        --n;
    }

    /* rep movsb byte ptr es:[edi], byte ptr [esi] */
    n = len2 & 3u;
    while (n != 0u) {
        wr8(dst2, rd8(src3));
        ++dst2;
        ++src3;
        --n;
    }

    /*
       Save callee-saved registers around the call.  The original pushed
       ebx/esi/edi before the call and popped them afterward, so they must be
       unchanged on return.
    */
    const uint32_t saved_ebx = g->ebx;
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;
    const uint32_t saved_ebp = g->ebp;

    cow_thiscall(g, COW_IMG(0x10067990u), arg0, 1u, buf);

    g->ebx = saved_ebx;
    g->esi = saved_esi;
    g->edi = saved_edi;
    g->ebp = saved_ebp;

    return arg0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10067b70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_10067b70(g, self, arg0, arg1);

    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
