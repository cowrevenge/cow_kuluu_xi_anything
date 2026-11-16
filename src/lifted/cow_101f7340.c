/* f_0x101f7340 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=3 */
uint32_t cow_fn_101f7340(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_call_regs(g, COW_IMG(0x10087650u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        goto L_101f7352;
    }
    eax = t1;
    return eax;
L_101f7352: ;
    t4 = rd32(sp0 + 8u);
    wr8(sp0 + 8u, t4 == 0xfffffffeu);
    if (t4 == 0xfffffffeu)
    {
        eax = t4;
        goto L_101f73d6;
    }
    eax = t4;
    if (eax != 0xffffffffu) goto L_101f73d6;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t5 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t6 = g->edx;
    if (t5 != 0u)
    {
        edx = t6;
        esi = t5;
        goto L_101f7380;
    }
    eax = t5;
    return eax & 0xffffff00u;
L_101f7380: ;
    g->eax = rd32(esi);
    t7 = rd32(esi);
    g->esp = sp0 - 0x14u;
    t8 = cow_thiscall(g, rd32(t7 + 0x1bcu), esi, 0);
    t9 = rd32(t8);
    t10 = cow_thiscall(g, rd32(rd32(esi) + 0x1bcu), esi, 0);
    t11 = rd32(t10 + 4u);
    g->eax = t11;
    t12 = cow_thiscall(g, rd32(rd32(esi) + 0x1bcu), esi, 0);
    t13 = rd32(t12 + 8u);
    cow_thiscall(g, rd32(rd32(esi) + 0x1bcu), esi, 0);
    t14 = cow_thiscall(g, COW_IMG(0x101811d0u), rd32(COW_IMG(0x10631f24u)), 3, t9, t11, t13);
    eax = t14;
L_101f73d6: ;
    t15 = rd32(sp0 + 8u);
    g->esp = sp0 - 0x14u;
    t16 = cow_call_regs(g, COW_IMG(0x101f7430u), g->eax, t15, arg1, 1, 3, arg1, eax, t15);
    t17 = g->ecx;
    t18 = g->edx;
    if ((int32_t)t16 >= 0)
    {
        eax = t16;
        ecx = t17;
        edx = t18;
        goto L_101f73f4;
    }
    eax = t16;
    return eax & 0xffffff00u;
L_101f73f4: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t19 = cow_cdecl(g, COW_IMG(0x101f7480u), 1, eax);
    t20 = g->ecx;
    t21 = g->edx;
    if (t19 == 0x180u)
    {
        eax = t19;
        goto L_101f7419;
    }
    eax = t19;
    ecx = t20;
    edx = t21;
    if (eax == 0x17fu) goto L_101f7419;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t22 = cow_cdecl(g, COW_IMG(0x101f74e0u), 1, eax);
    return t22;
L_101f7419: ;
    return (eax & 0xffffff00u) | (uint8_t)arg3 == 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f7340(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f7340(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
