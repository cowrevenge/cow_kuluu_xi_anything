/* f_0x10303e1d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_10303e1d(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(sp0 + 0x14u);
    if ((int32_t)rd32(sp0 + 0xcu) >= (int32_t)rd32(sp0 + 0x14u))
    {
        eax = rd32(sp0 + 0xcu);
        ebx = t1;
        loc_8 = t1;
        goto L_10303e55;
    }
    eax = rd32(sp0 + 0xcu);
    ebx = t1;
    loc_8 = t1;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t2 = cow_call_regs(g, COW_IMG(0x10303d33u), g->eax, g->ecx, in_edx, 1, 4, arg1, arg2, eax, ebx);
    if ((uint8_t)t2 != 0u) goto L_10303e4d;
    eax = t2;
    eax = 0xffffffffu;
L_10303f03: ;
    return eax;
L_10303e4d: ;
    eax = rd32(arg1 + 0x18u);
    edx = rd32(arg1 + 0xcu);
L_10303e58: ;
    wr32(sp0 + 0xcu, 1u);
    if ((int32_t)((uint32_t)((int32_t)edx >> ((eax - ebx & 0x1fu) < 0x20u ? eax - ebx & 0x1fu : 0x1fu)) & (rd32(sp0 + 0xcu) << (ebx & 0x1fu)) - 1u) <= (int32_t)rd32(arg4 + rd32(sp0 + 0x14u) * 4u + 0x44u))
    {
        ecx = arg4 + rd32(sp0 + 0x14u) * 4u + 0x44u;
        esi = (uint32_t)((int32_t)edx >> ((eax - ebx & 0x1fu) < 0x20u ? eax - ebx & 0x1fu : 0x1fu)) & (rd32(sp0 + 0xcu) << (ebx & 0x1fu)) - 1u;
        eax = eax - ebx;
        goto L_10303ebd;
    }
    ecx = arg4 + rd32(sp0 + 0x14u) * 4u + 0x44u;
    esi = (uint32_t)((int32_t)edx >> ((eax - ebx & 0x1fu) < 0x20u ? eax - ebx & 0x1fu : 0x1fu)) & (rd32(sp0 + 0xcu) << (ebx & 0x1fu)) - 1u;
    eax = eax - ebx;
    wr32(sp0 + 0x14u, ecx);
L_10303e82: ;
    if ((int32_t)eax >= 1)
    {
        esi = esi << 1u;
        goto L_10303ea0;
    }
    esi = esi << 1u;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t3 = cow_call_regs(g, COW_IMG(0x10303d33u), g->eax, g->ecx, edx, 1, 4, arg1, edx, eax, 1u);
    if ((uint8_t)t3 == 0u)
    {
        eax = t3;
        goto L_10303ee8;
    }
    eax = rd32(arg1 + 0x18u);
    edx = rd32(arg1 + 0xcu);
L_10303ea0: ;
    wr32(sp0 + 0x14u, rd32(sp0 + 0x14u) + 4u);
    if ((int32_t)(esi | ((uint32_t)((int32_t)edx >> ((eax - 1u & 0x1fu) < 0x20u ? eax - 1u & 0x1fu : 0x1fu)) & 1u)) > (int32_t)rd32(rd32(sp0 + 0x14u)))
    {
        ecx = rd32(sp0 + 0x14u);
        esi = esi | ((uint32_t)((int32_t)edx >> ((eax - 1u & 0x1fu) < 0x20u ? eax - 1u & 0x1fu : 0x1fu)) & 1u);
        eax = eax - 1u;
        loc_8 = loc_8 + 1u;
        goto L_10303e82;
    }
    ecx = rd32(sp0 + 0x14u);
    esi = esi | ((uint32_t)((int32_t)edx >> ((eax - 1u & 0x1fu) < 0x20u ? eax - 1u & 0x1fu : 0x1fu)) & 1u);
    eax = eax - 1u;
    loc_8 = loc_8 + 1u;
L_10303ebd: ;
    wr32(arg1 + 0x18u, eax);
    wr32(arg1 + 0xcu, edx);
    if ((int32_t)loc_8 <= 16)
    {
        eax = loc_8;
        eax = rd8(esi + rd32(arg4 + 0xd0u) + rd32(arg4 + eax * 4u + 0x8cu) - rd32(arg4 + eax * 4u) + 0x11u);
    }
    else
    {
        wr32(rd32(rd32(arg1 + 0x1cu)) + 0x14u, 0x72u);
        t4 = rd32(arg1 + 0x1cu);
        g->esp = sp0 - 0x14u;
        cow_thiscall_cdecl(g, rd32(rd32(rd32(arg1 + 0x1cu)) + 4u), ecx, 2, t4, 0xffffffffu);
        eax = 0u;
    }
L_10303f02: ;
    goto L_10303f03;
L_10303e55: ;
    edx = arg2;
    goto L_10303e58;
L_10303ee8: ;
    eax = 0xffffffffu;
    goto L_10303f02;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10303e1d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10303e1d(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
