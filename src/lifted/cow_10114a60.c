/* f_0x10114a60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10114a60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    int64_t q7;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    wr32(sp0 - 0x2cu, arg1);
    wr32(sp0 - 0x30u, COW_IMG(0x1036c084u));
    wr32(sp0 - 0x34u, sp0 - 0x20u);
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t1 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1036c084u), arg1, in_edi, in_esi);
    t2 = g->edx;
    if ((int32_t)arg1 < 0) goto L_10114af9;
    eax = t1;
    edx = t2;
    wr32(sp0 - 0x2cu, sp0 - 0x20u);
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t3 = cow_thiscall(g, COW_IMG(0x101c4c70u), rd32(COW_IMG(0x10662dccu)), 1, sp0 - 0x20u);
    if ((uint8_t)t3 == 0u) goto L_10114af9;
    eax = t3;
    wr32(sp0 - 0x2cu, sp0 - 0x20u);
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t4 = cow_thiscall(g, COW_IMG(0x101c4b40u), rd32(COW_IMG(0x10662dccu)), 1, sp0 - 0x20u);
    if (t4 < arg4 + 0x48u) goto L_10114af9;
    eax = t4;
    if (eax - arg4 <= arg3 * 0x48u)
    {
        ecx = eax - arg4;
    }
    else
    {
        ecx = arg3 * 0x48u;
    }
    wr32(sp0 - 0x2cu, arg4 * 0x48u);
    wr32(sp0 - 0x30u, ecx);
    wr32(sp0 - 0x34u, arg2);
    wr32(sp0 - 0x38u, sp0 - 0x20u);
    g->eax = sp0 - 0x20u;
    g->edx = arg2;
    g->esp = sp0 - 0x28u;
    t5 = cow_thiscall(g, COW_IMG(0x101c47b0u), rd32(COW_IMG(0x10662dccu)), 4, sp0 - 0x20u, arg2, ecx, arg4 * 0x48u);
    t6 = g->edx;
    if (t5 < 0x48u) goto L_10114af9;
    ecx = t5;
    edx = t6;
    q7 = (uint64_t)cow_mulu(0x38e38e39u, ecx);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    return cow_qhi(q7) >> 4u;
L_10114af9: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10114a60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10114a60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
