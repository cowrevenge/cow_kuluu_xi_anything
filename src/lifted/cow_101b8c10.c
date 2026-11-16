/* f_0x101b8c10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101b8c10(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)arg2 <= 0) goto L_101b8c75;
    ecx = self;
    edx = 0u;
L_101b8c1f: ;
    if (rd8(arg1 + edx) != 0x7fu)
    {
        ecx = (ecx & 0xffffff00u) | rd8(arg1 + edx);
        if ((uint8_t)ecx < 0x80u) goto L_101b8c3b;
        if ((uint8_t)ecx <= 0x9fu) goto L_101b8c45;
L_101b8c3b: ;
        if ((uint8_t)ecx < 0xe0u) goto L_101b8c4f;
        if ((uint8_t)ecx > 0xffu) goto L_101b8c4f;
L_101b8c45: ;
        ecx = 1u;
        edx = edx + 2u;
    }
    else
    {
        ecx = 2u;
        edx = edx + 2u;
    }
L_101b8c52: ;
    if ((int32_t)edx < (int32_t)arg2) goto L_101b8c1f;
    if (ecx != 2u) goto L_101b8c65;
    wr8(arg1 + arg2 - ecx, 0u);
    return;
L_101b8c4f: ;
    ecx = 0u;
    edx = edx + 1u;
    goto L_101b8c52;
L_101b8c65: ;
    if (ecx != 1u) goto L_101b8c75;
    wr8(arg1 + arg2 - 2u, 0u);
    return;
L_101b8c75: ;
    wr8(arg1 + arg2 - 1u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b8c10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101b8c10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
