/* f_0x1019a360 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1019a360(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_24;
    uint32_t loc_28;
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
    uint32_t t24;
    uint32_t t25;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    if (rd32(self + 0x34u) == 0u) goto L_1019a39d;
    eax = rd32(self + 0x34u);
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_1019a3b6;
    }
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0x80808080u);
    t1 = (uint32_t)(int16_t)rd16(self + 0x46u);
    wr32(sp0 - 0x24u, t1);
    t2 = (uint32_t)(int16_t)rd16(self + 0x44u);
    wr32(sp0 - 0x28u, t2);
    eax = t1;
    ecx = rd32(self + 0x20u);
    edx = in_edx;
    loc_24 = t1;
    loc_28 = t2;
L_1019a3b1: ;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t5 = cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, loc_28, loc_24, 0x80808080u, 0u, 0u);
    eax = t5;
L_1019a3b6: ;
    t6 = rd32(rd32(self + 0x3cu));
    wr32(sp0 - 0x18u, t6);
    wr32(sp0 - 0x1cu, 0xbu);
    g->eax = eax;
    g->edx = t6;
    g->esp = sp0 - 0x14u;
    t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, t6);
    t8 = g->edx;
    if (t7 == 0u)
    {
        eax = t7;
        edx = t8;
        ebx = in_ebx;
        ebp = in_ebp;
    }
    else
    {
        edx = t8;
        wr32(sp0 - 0x18u, in_ebx);
        wr32(sp0 - 0x1cu, in_ebp);
        ebx = in_ebx;
        ebp = 1u;
        edi = 0u;
L_1019a3d5: ;
        wr32(sp0 - 0x20u, 1u);
        wr32(sp0 - 0x24u, 1u);
        wr32(sp0 - 0x28u, ebp);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        g->ebx = ebx;
        g->edi = edi;
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, ebp, 1u, 1u);
        wr32(sp0 - 0x20u, 0x80808080u);
        t9 = rd32(edi + rd32(self + 0x3cu));
        wr32(sp0 - 0x24u, t9);
        wr32(sp0 - 0x28u, 0xbu);
        t10 = (uint32_t)(int16_t)rd16(sp0 - 6u);
        wr32(sp0 - 0xcu, t10);
        g->eax = t9;
        g->edx = rd32(self + 0x3cu);
        t11 = rd32(self + 0x3cu);
        t12 = rd16(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, t9);
        t14 = g->edx;
        wr32(sp0 - 0x24u, t13);
        t15 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x28u, t15);
        t16 = (uint32_t)(int16_t)t12 + 0x1eu;
        wr32(sp0 - 0x2cu, t16);
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x101907e0u), 9, t16, t15, t13, 0x80808080u, in_ebp, in_ebx, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t17 = rd32(edi + rd32(self + 0x3cu) + 4u);
        wr32(sp0 - 0x20u, t17);
        g->esp = sp0 - 0x1cu;
        t18 = cow_thiscall(g, COW_IMG(0x1019a860u), self, 1, t17);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0x80808080u);
        t19 = (uint32_t)(int16_t)rd16(sp0 - 6u);
        wr32(sp0 - 0x2cu, t19);
        t20 = (uint32_t)(int16_t)rd16(sp0 - 8u);
        wr32(sp0 - 0x30u, t20);
        g->edx = t20;
        cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + t18 * 4u + 0x14u), 5, t20, t19, 0x80808080u, 0u, 0u);
        t21 = g->edx;
        t22 = rd32(edi + rd32(self + 0x3cu) + 8u);
        wr32(sp0 - 0x20u, t22);
        wr32(sp0 - 0x24u, 0xbu);
        g->eax = rd32(self + 0x3cu);
        g->edx = t21;
        t23 = rd32(self + 0x3cu);
        t24 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, t22);
        t25 = g->edx;
        if (t24 != 0u)
        {
            edx = t25;
            ebx = t16;
            ebp = ebp + 1u;
            edi = edi + 8u;
            goto L_1019a3d5;
        }
        eax = t24;
        edx = t25;
        ebx = rd32(sp0 - 0x18u);
        ebp = rd32(sp0 - 0x1cu);
    }
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = ebp;
    g->edx = edx;
    return eax;
L_1019a39d: ;
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0x80808080u);
    t3 = (uint32_t)(int16_t)rd16(self + 0x46u);
    wr32(sp0 - 0x24u, t3);
    t4 = (uint32_t)(int16_t)rd16(self + 0x44u);
    wr32(sp0 - 0x28u, t4);
    eax = t4;
    ecx = rd32(self + 0x1cu);
    edx = t3;
    loc_24 = t3;
    loc_28 = t4;
    goto L_1019a3b1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019a360(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019a360(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
