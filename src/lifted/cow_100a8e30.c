/* f_0x100a8e30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100a8e30(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_edi);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 0x1cu, t1);
    wr32(sp0 - 0xcu, self);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t2 = cow_thiscall(g, COW_IMG(0x100a96b0u), self, 1, t1);
    t3 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        edx = t3;
        ebx = t1;
        goto L_100a8e54;
    }
    eax = t2;
    edx = t3;
    ebx = t1;
    if (ebx == 0u)
    {
        esi = in_esi;
        goto L_100a8f9e;
    }
L_100a8e82: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t27 = cow_call_regs(g, COW_IMG(0x1018c620u), eax, ebx, g->edx, 1, 0);
    t28 = g->ecx;
    t29 = g->edx;
    wr32(sp0 - 0x1cu, ebx);
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t28, t29, 1, 1, ebx);
    return;
L_100a8e54: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t4 = cow_thiscall(g, COW_IMG(0x1018ca20u), ebx, 0);
    t5 = g->edx;
    wr32(sp0 + 4u, t4);
    if (rd16(rd32(rd32(ebx + 0xcu) + 0x20u) + 0x20u) >= 0x12u)
    {
        eax = (rd32(ebx + 0xcu) & 0xffff0000u) | rd16(rd32(rd32(ebx + 0xcu) + 0x20u) + 0x20u);
        edx = t5;
        goto L_100a8e82;
    }
    eax = (rd32(ebx + 0xcu) & 0xffff0000u) | rd16(rd32(rd32(ebx + 0xcu) + 0x20u) + 0x20u);
    ecx = rd32(rd32(ebx + 0xcu) + 0x20u);
    edx = t5;
    if (rd16(COW_IMG(0x1035bc3cu) + (uint16_t)eax * 2u) != 0u)
    {
        edi = rd16(COW_IMG(0x1035bc3cu) + (uint16_t)eax * 2u);
        goto L_100a8e9b;
    }
    eax = (uint16_t)eax;
    goto L_100a8e82;
L_100a8e9b: ;
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, 0x34u);
    wr32(sp0 - 8u, edi + 0xaf0u);
    g->esp = sp0 - 0x14u;
    t6 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x34u, in_esi, rd32(sp0 - 0x18u));
    t7 = g->edx;
    if (t6 == 0u)
    {
        edx = t7;
        edi = edi + 0xaf0u;
        ebp = self;
        esi = 0u;
    }
    else
    {
        eax = t6;
        edx = t7;
        esi = t6;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t8 = cow_thiscall(g, COW_IMG(0x100814a0u), esi + 8u, 0);
        t9 = g->edx;
        cow_thiscall(g, COW_IMG(0x100814a0u), esi + 0x14u, 0);
        t10 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x20u, t10);
        t11 = rd32(sp0 + 4u);
        wr32(esi, t10);
        wr32(esi + 4u, t11);
        g->edx = t11;
        cow_thiscall(g, COW_IMG(0x100814f0u), esi + 8u, 1, t10);
        t12 = g->edx;
        t13 = rd32(sp0 + 4u);
        wr32(sp0 - 0x20u, t13);
        g->edx = t12;
        cow_thiscall(g, COW_IMG(0x100814f0u), esi + 0x14u, 1, t13);
        t14 = g->edx;
        wr32(esi + 0x20u, ebx);
        wr16(esi + 0x26u, 0u);
        wr16(esi + 0x28u, 0u);
        wr8(esi + 0x2au, 0u);
        wr32(esi + 0x2cu, 0u);
        wr32(esi + 0x30u, 0x6e69616du);
        if (rd32(ebx + 4u) == 0u)
        {
            edx = t14;
        }
        else
        {
            eax = rd32(ebx + 4u);
            edx = t14;
            wr32(esi + 0x30u, eax);
        }
        t15 = rd16(rd32(ebx + 0xcu) + 0x1eu);
        wr16(esi + 0x24u, (uint16_t)t15);
        g->edx = (edx & 0xffff0000u) | t15;
        g->esp = sp0 - 0x1cu;
        t16 = cow_thiscall(g, COW_IMG(0x1018c890u), ebx, 0);
        t17 = g->edx;
        if (t16 == 0u)
        {
            edx = t17;
        }
        else
        {
            eax = t16;
            edx = t17;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, COW_IMG(0x100a4140u), eax, 0);
            t18 = g->edx;
            edx = t18;
        }
        edi = 0u;
L_100a8f33: ;
        if (rd32(esi + 0x20u) == 0u)
        {
            ecx = rd32(esi + 0x20u);
            eax = (uint32_t)(int16_t)rd16(esi + 0x24u);
        }
        else
        {
            ecx = rd32(esi + 0x20u);
            eax = (uint32_t)(int16_t)rd16(rd32(ecx + 0xcu) + 0x1eu);
        }
        if ((int32_t)edi >= (int32_t)eax) goto L_100a8f5f;
        wr32(sp0 - 0x20u, edi);
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t19 = cow_thiscall(g, COW_IMG(0x1018c8c0u), ecx, 1, edi);
        t20 = g->edx;
        if (t19 == 0u)
        {
            edx = t20;
        }
        else
        {
            eax = t19;
            edx = t20;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, COW_IMG(0x100a4140u), eax, 0);
            t21 = g->edx;
            edx = t21;
        }
        edi = edi + 1u;
        goto L_100a8f33;
    }
L_100a8f6b: ;
    wr32(sp0 - 0x20u, edi);
    wr32(sp0 - 0x24u, sp0 + 4u);
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t22 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 + 4u, edi);
    t23 = g->edx;
    wr32(sp0 - 4u, rd32(t22));
    wr32(esi + 0x2cu, edi);
    g->edx = t23;
    t24 = rd32(t22);
    t25 = cow_thiscall(g, COW_IMG(0x1018ca20u), ebx, 0);
    t26 = g->edx;
    wr32(sp0 - 0x20u, t25);
    wr32(sp0 - 0x24u, ebp);
    wr32(sp0 - 0x28u, esi);
    wr32(sp0 - 0x2cu, COW_IMG(0x100a8fb0u));
    cow_thiscall(g, COW_IMG(0x100710f0u), sp0 - 4u, 4, COW_IMG(0x100a8fb0u), esi, ebp, t25);
    esi = rd32(sp0 - 0x1cu);
L_100a8f9e: ;
    g->esi = esi;
    return;
L_100a8f5f: ;
    ebp = rd32(sp0 - 0xcu);
    edi = rd32(sp0 - 8u);
    goto L_100a8f6b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a8e30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100a8e30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
