/* f_0x101e3100 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101e3100(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_114;
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
    uint32_t t23;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 284u);

    wr32(sp0 - 0x104u, in_ebx);
    wr32(sp0 - 0x108u, in_esi);
    wr32(sp0 - 0x10cu, in_edi);
    g->esp = sp0 - 0x10cu;
    t1 = cow_thiscall(g, COW_IMG(0x101f7100u), rd32(COW_IMG(0x106634c4u)), 0);
    if (rd32(rd32(COW_IMG(0x106634c4u)) + 0x38u) == 0u)
    {
        eax = t1;
        edx = rd32(rd32(COW_IMG(0x106634c4u)) + 0x38u);
        goto L_101e3143;
    }
    eax = t1;
    ecx = rd32(COW_IMG(0x106634c4u));
    edx = rd32(rd32(COW_IMG(0x106634c4u)) + 0x38u);
    if ((int32_t)eax >= (int16_t)rd16(ecx + 0x20u)) goto L_101e3143;
    if (eax * 0x54u + edx == 0u)
    {
        eax = eax * 0x54u + edx;
        goto L_101e3143;
    }
    eax = eax * 0x54u + edx;
    edi = rd32(eax + 0x48u);
L_101e3145: ;
    wr32(sp0 - 0x110u, 1u);
    if (edi != 0u)
    {
        ecx = rd32(self + 8u);
        goto L_101e316a;
    }
    ecx = rd32(self + 8u);
    wr32(sp0 - 0x114u, 5u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10cu;
    t2 = cow_thiscall(g, COW_IMG(0x10118b60u), ecx, 2, 5u, 1u);
    t3 = g->edx;
    wr32(sp0 - 0x110u, 2u);
    wr32(sp0 - 0x114u, 5u);
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 2u);
    t5 = g->edx;
    wr32(sp0 - 0x110u, 2u);
    wr32(sp0 - 0x114u, COW_IMG(0x1034f2b8u));
    eax = t4;
    edx = t5;
    loc_114 = COW_IMG(0x1034f2b8u);
L_101e31e6: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10cu;
    t22 = cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, loc_114, 2u);
    t23 = g->edx;
    eax = t22;
    edx = t23;
L_101e31f1: ;
    g->ebx = rd32(sp0 - 0x104u);
    g->esi = rd32(sp0 - 0x108u);
    g->edi = rd32(sp0 - 0x10cu);
    g->edx = edx;
    return eax;
L_101e3143: ;
    edi = 0u;
    goto L_101e3145;
L_101e316a: ;
    wr32(sp0 - 0x114u, 0xbu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10cu;
    t6 = cow_thiscall(g, COW_IMG(0x10118b60u), ecx, 2, 0xbu, 1u);
    t7 = g->edx;
    wr32(sp0 - 0x110u, 2u);
    wr32(sp0 - 0x114u, 0xbu);
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0xbu, 2u);
    t9 = g->edx;
    if ((uint8_t)arg1 == 0u)
    {
        eax = (t8 & 0xffffff00u) | (uint8_t)arg1;
        edx = t9;
        goto L_101e31f1;
    }
    eax = (t8 & 0xffffff00u) | (uint8_t)arg1;
    edx = t9;
    t10 = rd16(edi + 6u);
    wr32(sp0 - 0x110u, t10);
    g->edx = edx;
    t11 = rd32(COW_IMG(0x10621808u));
    g->esp = sp0 - 0x10cu;
    t12 = cow_thiscall(g, COW_IMG(0x1015bbd0u), t11, 1, t10);
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 == 0u)
    {
        eax = t12;
        edx = t14;
        goto L_101e31f1;
    }
    ecx = t13;
    edx = t14;
    ebx = t12;
    edi = sp0 - 0xffu;
    eax = 0u;
    ecx = 0x3fu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t15 = rd32(self + 8u);
    wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
    wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
    t16 = (eax & 0xffff0000u) | rd16(t15 + 0x4cu);
    wr32(sp0 - 0x110u, t16);
    g->edi = edi;
    g->esp = sp0 - 0x10cu;
    t17 = cow_thiscall(g, COW_IMG(0x101187a0u), t15, 1, t16);
    t18 = g->ecx;
    t19 = rd32(ebx + 0x14c8u);
    wr32(sp0 - 0x110u, t19);
    wr32(sp0 - 0x114u, t17);
    wr32(sp0 - 0x118u, sp0 - 0x100u);
    g->edx = t19;
    g->esp = sp0 - 0x104u;
    t20 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, t17, t19, rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u));
    t21 = g->edx;
    wr32(sp0 - 0x110u, 2u);
    wr32(sp0 - 0x114u, sp0 - 0x100u);
    eax = t20;
    edx = t21;
    loc_114 = sp0 - 0x100u;
    goto L_101e31e6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e3100(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e3100(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
