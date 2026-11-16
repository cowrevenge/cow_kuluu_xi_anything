/* f_0x100d1f70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100d1f70(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_c;
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
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t1 = cow_thiscall(g, COW_IMG(0x10084400u), self, 0);
    t2 = g->edx;
    if ((int32_t)t1 < 0) goto L_100d2106;
    eax = t1;
    edx = t2;
    if ((int32_t)eax <= 1) goto L_100d1f93;
    if (eax != 6u) goto L_100d2106;
L_100d1f93: ;
    g->esp = sp0 - 0x18u;
    t3 = cow_fastcall(g, COW_IMG(0x10084420u), self, edx, 0);
    t4 = g->edx;
    if ((int32_t)t3 < 9)
    {
        eax = t3;
        edx = t4;
    }
    else
    {
        edx = t4;
        eax = 1u;
    }
    t5 = rd32(self + 0x8a0u) + rd16(COW_IMG(0x1035d83cu) + eax * 2u);
    wr32(sp0 - 0x1cu, t5);
    wr32(sp0 - 0x20u, sp0 - 8u);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t6 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 - 8u, t5);
    t7 = g->edx;
    wr32(sp0 - 0xcu, rd32(t6));
    if (rd32(t6) == 0u)
    {
        ebx = eax * 2u;
        eax = rd32(t6);
    }
    else
    {
        edx = t7;
        ebx = eax * 2u;
        eax = rd32(t6);
        edi = t5;
        loc_c = rd32(t6);
        wr32(sp0 - 0x1cu, 3u);
        wr32(sp0 - 0x20u, edi);
        wr32(sp0 - 0x24u, 1u);
        wr32(sp0 - 0x28u, eax);
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, COW_IMG(0x100d4410u), self, 4, eax, 1u, edi, 3u);
        t8 = g->edx;
        g->edx = t8;
        t9 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0xcu, 0);
        t10 = g->ecx;
        t11 = g->edx;
        if ((uint8_t)t9 == 0u)
        {
            ecx = t10;
            edx = t11;
            wr32(sp0 - 0x1cu, 0x14u);
            g->esp = sp0 - 0x10u;
            t15 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
            t16 = g->edx;
            if (t15 == 0u)
            {
                eax = t15;
                edx = t16;
                edi = 0u;
            }
            else
            {
                eax = t15;
                edx = t16;
                edi = t15;
                wr32(sp0 - 0x1cu, in_ebp);
                g->edx = edx;
                g->esp = sp0 - 0x1cu;
                cow_thiscall(g, COW_IMG(0x100814a0u), edi + 4u, 0);
                t17 = g->edx;
                wr32(sp0 - 0x20u, self);
                t18 = rd32(self + 0x9ecu);
                wr32(edi, t18);
                g->eax = t18;
                g->edx = t17;
                t19 = cow_thiscall(g, COW_IMG(0x100814f0u), edi + 4u, 1, self);
                t20 = g->edx;
                wr32(edi + 0x10u, 1u);
                eax = t19;
                edx = t20;
            }
            wr32(sp0 - 0x1cu, 0u);
            wr32(sp0 - 0x20u, self);
            wr32(sp0 - 0x24u, edi);
            wr32(sp0 - 0x28u, COW_IMG(0x100d1400u));
            g->eax = eax;
            g->esp = sp0 - 0x18u;
            t21 = cow_thiscall(g, COW_IMG(0x100710f0u), sp0 - 0xcu, 4, COW_IMG(0x100d1400u), edi, self, 0u);
            eax = t21;
        }
        else
        {
            eax = t9;
            t12 = rd32(self + 0x9ecu);
            wr32(sp0 - 0x1cu, t12);
            t13 = rd32(sp0 - 0xcu);
            wr32(sp0 - 0x20u, t13);
            g->eax = eax;
            g->esp = sp0 - 0x18u;
            t14 = cow_thiscall(g, COW_IMG(0x100d1450u), self, 2, t13, t12);
            eax = t14;
        }
    }
    if ((int8_t)rd8(self + 0x881u) <= 0) goto L_100d2106;
    eax = (eax & 0xffffff00u) | rd8(self + 0x881u);
    t22 = rd32(self + 0x8a0u) + rd16(COW_IMG(0x1035d84eu) + ebx * 2u + (uint32_t)(int8_t)eax * 2u);
    wr32(sp0 - 0x1cu, t22);
    wr32(sp0 - 0x20u, sp0 - 4u);
    g->edx = sp0 - 4u;
    t23 = rd32(self + 0x8a0u);
    g->esp = sp0 - 0x18u;
    t24 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 - 4u, t22);
    t25 = g->edx;
    wr32(sp0 - 0xcu, rd32(t24));
    if (rd32(t24) == 0u) goto L_100d2106;
    eax = rd32(t24);
    edx = t25;
    edi = t22;
    loc_c = rd32(t24);
    wr32(sp0 - 0x1cu, 3u);
    wr32(sp0 - 0x20u, edi);
    wr32(sp0 - 0x24u, 2u);
    wr32(sp0 - 0x28u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x100d4410u), self, 4, eax, 2u, edi, 3u);
    t26 = g->edx;
    g->edx = t26;
    t27 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0xcu, 0);
    t28 = g->ecx;
    t29 = g->edx;
    if ((uint8_t)t27 == 0u)
    {
        ecx = t28;
        edx = t29;
        goto L_100d20bf;
    }
    edx = t29;
    t30 = rd32(self + 0x9ecu);
    wr32(sp0 - 0x1cu, t30);
    t31 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x20u, t31);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x100d1450u), self, 2, t31, t30);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    return;
L_100d20bf: ;
    wr32(sp0 - 0x1cu, 0x14u);
    g->esp = sp0 - 0x10u;
    t32 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t33 = g->edx;
    if (t32 == 0u)
    {
        eax = t32;
        edx = t33;
        edi = 0u;
    }
    else
    {
        eax = t32;
        edx = t33;
        edi = t32;
        g->eax = eax;
        g->esp = sp0 - 0x18u;
        t34 = cow_thiscall(g, COW_IMG(0x100814a0u), edi + 4u, 0);
        wr32(sp0 - 0x1cu, self);
        t35 = rd32(self + 0x9ecu);
        wr32(edi, t35);
        g->edx = t35;
        t36 = cow_thiscall(g, COW_IMG(0x100814f0u), edi + 4u, 1, self);
        t37 = g->edx;
        wr32(edi + 0x10u, 2u);
        eax = t36;
        edx = t37;
    }
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, self);
    wr32(sp0 - 0x24u, edi);
    wr32(sp0 - 0x28u, COW_IMG(0x100d1400u));
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x100710f0u), sp0 - 0xcu, 4, COW_IMG(0x100d1400u), edi, self, 0u);
L_100d2106: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d1f70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100d1f70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
