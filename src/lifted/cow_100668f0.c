/* f_0x100668f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100668f0(Guest* g)
{
    double d17;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x24u, in_esi);
    if (rd8(arg2) != 0x23u) goto L_10066946;
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, arg2 + 1u);
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    t1 = cow_thiscall(g, COW_IMG(0x10064230u), arg3, 2, arg2 + 1u, 1u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_10066929;
    }
    eax = t1;
    edx = t3;
    g->esp = sp0 - 0x24u;
    t4 = cow_thiscall(g, COW_IMG(0x100643f0u), eax, 0);
    t5 = rd32(sp0 - 0x24u);
    wr32(arg1 + 8u, t4);
    wr8(arg1 + 4u, 3u);
    g->esi = t5;
    return (t4 & 0xffffff00u) | 1u;
L_10066929: ;
    wr32(sp0 - 0x28u, arg2 + 1u);
    g->eax = eax;
    g->esp = sp0 - 0x24u;
    t6 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, arg2 + 1u);
    wr32(arg1 + 8u, t6);
    wr8(arg1 + 4u, 3u);
    g->esi = rd32(sp0 - 0x24u);
    return (t6 & 0xffffff00u) | 1u;
L_10066946: ;
    wr32(sp0 - 0x28u, arg2);
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->esp = sp0 - 0x24u;
    t7 = cow_thiscall(g, COW_IMG(0x100660a0u), self, 2, sp0 - 0x10u, arg2);
    wr32(sp0 - 0x20u, rd32(t7));
    t8 = rd32(t7 + 8u);
    wr32(sp0 - 0x18u, t8);
    t9 = rd32(t7 + 4u);
    wr32(sp0 - 0x1cu, t9);
    if (rd32(t7 + 0xcu) != 0x13u)
    {
        eax = t7;
        goto L_100669c0;
    }
    eax = t7;
    ecx = rd32(t7 + 0xcu);
    edx = t9;
    wr32(sp0 - 0x28u, arg2);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t10 = cow_call_regs(g, COW_IMG(0x10064440u), eax, g->ecx, g->edx, 1, 1, arg2);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x28u, arg2);
    if ((uint8_t)t10 == 0u)
    {
        eax = t10;
        ecx = t11;
        edx = t12;
        goto L_10066997;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    g->eax = eax;
    g->esp = sp0 - 0x24u;
    t13 = cow_cdecl(g, COW_IMG(0x100644a0u), 1, arg2);
    wr32(arg1 + 8u, t13);
    wr8(arg1 + 4u, 1u);
    g->esi = rd32(sp0 - 0x24u);
    return (t13 & 0xffffff00u) | 1u;
L_10066997: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t14 = cow_call_regs(g, COW_IMG(0x10064410u), eax, g->ecx, g->edx, 1, 1, arg2);
    t15 = g->ecx;
    t16 = g->edx;
    if ((uint8_t)t14 == 0u)
    {
        eax = t14;
        goto L_100669c0;
    }
    ecx = t15;
    edx = t16;
    wr32(sp0 - 0x28u, arg2);
    g->esp = sp0 - 0x24u;
    cow_thiscall_cdecl(g, COW_IMG(0x10064490u), ecx, 1, arg2);
    d17 = cow_take_float(g);
    wrf32(arg1 + 8u, (float)d17);
    wr8(arg1 + 4u, 2u);
    g->esi = rd32(sp0 - 0x24u);
    return (arg1 & 0xffffff00u) | 1u;
L_100669c0: ;
    g->esi = rd32(sp0 - 0x24u);
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100668f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100668f0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
