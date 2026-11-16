/* f_0x10211690 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10211690(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
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
    cow_frame(g, sp0, 96u);

    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    if ((int32_t)rd32(self + 8u) <= 0)
    {
        ebx = 0u;
        goto L_1021179e;
    }
    edx = in_edx;
    ebx = 0u;
    esi = 0u;
L_102116a7: ;
    wr32(sp0 - 0x34u, 0xeu);
    wr32(sp0 - 0x38u, esi);
    wr32(sp0 - 0x3cu, sp0 - 0x24u);
    g->eax = sp0 - 0x24u;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t1 = cow_thiscall(g, COW_IMG(0x10211490u), self, 3, sp0 - 0x24u, esi, 0xeu);
    t2 = g->edx;
    wr32(sp0 - 0x34u, 0x10u);
    wr32(sp0 - 0x38u, esi + t1);
    wr32(sp0 - 0x3cu, sp0 - 0x14u);
    t3 = cow_thiscall(g, COW_IMG(0x10211490u), self, 3, sp0 - 0x14u, esi + t1, 0x10u);
    t4 = g->ecx;
    if (rd8(self + 0x15u) == 0u)
    {
        esi = esi + t1 + t3;
    }
    else
    {
        eax = (t3 & 0xffffff00u) | rd8(self + 0x15u);
        ecx = t4;
        esi = esi + t1 + t3;
        t5 = rd32(sp0 - 0x24u);
        wr32(sp0 - 0x34u, t5);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = t5;
        g->esp = sp0 - 0x30u;
        t6 = cow_cdecl(g, COW_IMG(0x1000d150u), 1, t5);
        t7 = g->ecx;
        t8 = g->edx;
        wr32(sp0 - 0x24u, t6);
        t9 = rd32(sp0 - 0x20u);
        wr32(sp0 - 0x38u, t9);
        g->eax = t9;
        g->edx = t8;
        g->esp = sp0 - 0x34u;
        t10 = cow_cdecl(g, COW_IMG(0x1000d0f0u), 1, t9);
        t11 = g->edx;
        t12 = rd32(sp0 - 0x1eu);
        wr16(sp0 - 0x20u, (uint16_t)t10);
        wr32(sp0 - 0x3cu, t12);
        g->ecx = t12;
        g->esp = sp0 - 0x38u;
        t13 = cow_cdecl(g, COW_IMG(0x1000d0f0u), 1, t12);
        t14 = g->ecx;
        t15 = rd32(sp0 - 0x1cu);
        wr16(sp0 - 0x1eu, (uint16_t)t13);
        wr32(sp0 - 0x40u, t15);
        g->ecx = t14;
        g->edx = t15;
        g->esp = sp0 - 0x3cu;
        t16 = cow_cdecl(g, COW_IMG(0x1000d0f0u), 1, t15);
        t17 = g->ecx;
        t18 = g->edx;
        wr16(sp0 - 0x1cu, (uint16_t)t16);
        t19 = rd32(sp0 - 0x1au);
        wr32(sp0 - 0x44u, t19);
        g->eax = t19;
        g->edx = t18;
        g->esp = sp0 - 0x40u;
        t20 = cow_cdecl(g, COW_IMG(0x1000d0f0u), 1, t19);
        t21 = g->edx;
        t22 = rd32(sp0 - 0x18u);
        wr16(sp0 - 0x1au, (uint16_t)t20);
        wr32(sp0 - 0x48u, t22);
        g->ecx = t22;
        g->esp = sp0 - 0x44u;
        t23 = cow_cdecl(g, COW_IMG(0x1000d0f0u), 1, t22);
        t24 = g->ecx;
        t25 = rd32(sp0 - 0x14u);
        wr16(sp0 - 0x18u, (uint16_t)t23);
        wr32(sp0 - 0x4cu, t25);
        g->ecx = t24;
        g->edx = t25;
        g->esp = sp0 - 0x48u;
        t26 = cow_cdecl(g, COW_IMG(0x1000d150u), 1, t25);
        t27 = g->ecx;
        t28 = g->edx;
        wr32(sp0 - 0x14u, t26);
        t29 = rd32(sp0 - 0x10u);
        wr32(sp0 - 0x50u, t29);
        g->eax = t29;
        g->edx = t28;
        g->esp = sp0 - 0x4cu;
        t30 = cow_cdecl(g, COW_IMG(0x1000d150u), 1, t29);
        t31 = g->edx;
        wr32(sp0 - 0x10u, t30);
        t32 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x54u, t32);
        g->ecx = t32;
        g->esp = sp0 - 0x50u;
        t33 = cow_cdecl(g, COW_IMG(0x1000d150u), 1, t32);
        t34 = g->ecx;
        wr32(sp0 - 0xcu, t33);
        t35 = rd32(sp0 - 8u);
        wr32(sp0 - 0x58u, t35);
        g->ecx = t34;
        g->edx = t35;
        g->esp = sp0 - 0x54u;
        t36 = cow_cdecl(g, COW_IMG(0x1000d0f0u), 1, t35);
        t37 = g->ecx;
        t38 = g->edx;
        wr16(sp0 - 8u, (uint16_t)t36);
        t39 = rd32(sp0 - 6u);
        wr32(sp0 - 0x5cu, t39);
        g->eax = t39;
        g->esp = sp0 - 0x58u;
        t40 = cow_cdecl(g, COW_IMG(0x1000d0f0u), 1, t39);
        wr16(sp0 - 6u, (uint16_t)t40);
    }
    if (rd32(sp0 - 0x24u) != rd32(COW_IMG(0x10385be4u))) goto L_1021179e;
    if ((int32_t)(esi + rd32(sp0 - 0x10u) + (uint32_t)(int16_t)rd16(sp0 - 8u)) < (int32_t)rd32(self + 8u))
    {
        edx = rd32(sp0 - 0x10u) + (uint32_t)(int16_t)rd16(sp0 - 8u);
        ebx = ebx + 1u;
        esi = esi + rd32(sp0 - 0x10u) + (uint32_t)(int16_t)rd16(sp0 - 8u);
        goto L_102116a7;
    }
    ebx = ebx + 1u;
L_1021179e: ;
    return ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10211690(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10211690(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
