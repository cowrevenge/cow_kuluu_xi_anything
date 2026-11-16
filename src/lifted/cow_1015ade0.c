/* f_0x1015ade0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1015ade0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 160u);

    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x64u, 0xcu);
    wr16(sp0 - 0x5cu, 0x1feu);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x5cu;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x68u, 1u);
    wr32(sp0 - 0x6cu, 0xcu);
    wr32(sp0 - 0x5au, t1);
    wr16(sp0 - 0x56u, 0x12au);
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x64u;
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 1u);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x70u, 2u);
    wr32(sp0 - 0x74u, 0xcu);
    wr32(sp0 - 0x54u, t4);
    wr16(sp0 - 0x50u, 0xd4u);
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x6cu;
    t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 2u);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x78u, 3u);
    wr32(sp0 - 0x7cu, 0xcu);
    wr32(sp0 - 0x4eu, t7);
    wr16(sp0 - 0x4au, 6u);
    g->ecx = t8;
    g->edx = t9;
    g->esp = sp0 - 0x74u;
    t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 3u);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x80u, 4u);
    wr32(sp0 - 0x84u, 0xcu);
    wr32(sp0 - 0x48u, t10);
    wr16(sp0 - 0x44u, 2u);
    g->ecx = t11;
    g->edx = t12;
    g->esp = sp0 - 0x7cu;
    t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 4u);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x88u, 5u);
    wr32(sp0 - 0x8cu, 0xcu);
    wr32(sp0 - 0x42u, t13);
    wr16(sp0 - 0x3eu, 4u);
    g->ecx = t14;
    g->edx = t15;
    g->esp = sp0 - 0x84u;
    t16 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 5u);
    t17 = g->ecx;
    t18 = g->edx;
    wr32(sp0 - 0x90u, 6u);
    wr32(sp0 - 0x94u, 0xcu);
    wr32(sp0 - 0x3cu, t16);
    wr16(sp0 - 0x38u, 0x18u);
    g->ecx = t17;
    g->edx = t18;
    g->esp = sp0 - 0x8cu;
    t19 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 6u);
    t20 = g->ecx;
    t21 = g->edx;
    wr32(sp0 - 0x98u, 7u);
    wr32(sp0 - 0x9cu, 0xcu);
    wr32(sp0 - 0x36u, t19);
    wr16(sp0 - 0x32u, 8u);
    g->ecx = t20;
    g->edx = t21;
    g->esp = sp0 - 0x94u;
    t22 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 7u);
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 0x30u, t22);
    wr16(sp0 - 0x2cu, 0x10u);
    wr32(sp0 - 0x60u, 8u);
    wr32(sp0 - 0x64u, 0xcu);
    g->ecx = t23;
    g->edx = t24;
    g->esp = sp0 - 0x5cu;
    t25 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 8u);
    t26 = g->ecx;
    t27 = g->edx;
    wr32(sp0 - 0x68u, 9u);
    wr32(sp0 - 0x6cu, 0xcu);
    wr32(sp0 - 0x2au, t25);
    wr16(sp0 - 0x26u, 0x60u);
    g->ecx = t26;
    g->edx = t27;
    g->esp = sp0 - 0x64u;
    t28 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 9u);
    t29 = g->ecx;
    t30 = g->edx;
    wr32(sp0 - 0x70u, 0xau);
    wr32(sp0 - 0x74u, 0xcu);
    wr32(sp0 - 0x24u, t28);
    wr16(sp0 - 0x20u, 0x20u);
    g->ecx = t29;
    g->edx = t30;
    g->esp = sp0 - 0x6cu;
    t31 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0xau);
    t32 = g->ecx;
    t33 = g->edx;
    wr32(sp0 - 0x78u, 0xbu);
    wr32(sp0 - 0x7cu, 0xcu);
    wr32(sp0 - 0x1eu, t31);
    wr16(sp0 - 0x1au, 0x40u);
    g->ecx = t32;
    g->edx = t33;
    g->esp = sp0 - 0x74u;
    t34 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0xbu);
    t35 = g->ecx;
    t36 = g->edx;
    wr32(sp0 - 0x80u, 0xcu);
    wr32(sp0 - 0x84u, 0xcu);
    wr32(sp0 - 0x18u, t34);
    wr16(sp0 - 0x14u, 0x100u);
    g->ecx = t35;
    g->edx = t36;
    g->esp = sp0 - 0x7cu;
    t37 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0xcu);
    t38 = g->ecx;
    t39 = g->edx;
    wr32(sp0 - 0x88u, 0xdu);
    wr32(sp0 - 0x8cu, 0xcu);
    wr32(sp0 - 0x12u, t37);
    wr16(sp0 - 0xeu, 0x80u);
    g->esp = sp0 - 0x84u;
    t40 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0xdu);
    wr32(sp0 - 0xcu, t40);
    wr16(sp0 - 8u, 0u);
    wr32(sp0 - 6u, COW_IMG(0x103d3c84u));
    eax = 0x1feu;
    ecx = sp0 - 0x5cu;
L_1015af23: ;
    if ((uint16_t)eax == (uint16_t)arg1) goto L_1015af56;
    if (rd16(ecx + 6u) != 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(ecx + 6u);
        ecx = ecx + 6u;
        goto L_1015af23;
    }
    eax = 0x1feu;
    ecx = sp0 - 0x5cu;
L_1015af3d: ;
    if ((uint16_t)(eax & arg1) != 0u) goto L_1015af56;
    eax = eax & arg1;
    if (rd16(ecx + 6u) != 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(ecx + 6u);
        ecx = ecx + 6u;
        goto L_1015af3d;
    }
    return 0u;
L_1015af56: ;
    return rd32(ecx + 2u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015ade0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015ade0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
