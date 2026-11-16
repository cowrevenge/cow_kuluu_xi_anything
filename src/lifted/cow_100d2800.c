/* f_0x100d2800 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100d2800(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_8;
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
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
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
    if (t1 == 2u)
    {
        eax = t1;
        goto L_100d2a03;
    }
    edx = t2;
    if (rd32(self + 0x70u) == 0u)
    {
        ebx = in_ebx & 0xffffff00u;
    }
    else
    {
        eax = rd32(self + 0x70u);
        t3 = rd32(eax + 0x120u);
        if (t3 >> 7u & 1u) goto L_100d2836;
        eax = t3;
        if (!(eax >> 8u & 1u))
        {
            ebx = in_ebx & 0xffffff00u;
            goto L_100d2838;
        }
L_100d2836: ;
        ebx = (in_ebx & 0xffffff00u) | 1u;
    }
L_100d2838: ;
    wr32(sp0 - 8u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t4 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t5 = g->edx;
    wr32(sp0 - 0x1cu, t4);
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, t4);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        ecx = t7;
        edx = t8;
        if ((uint8_t)ebx != 0u)
        {
            loc_8 = 0u;
        }
        else
        {
            t9 = rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1b4u);
            wr32(sp0 - 0x1cu, t9);
            g->edx = rd32(COW_IMG(0x1065cb04u));
            t10 = rd32(COW_IMG(0x1065cb04u));
            g->esp = sp0 - 0x18u;
            t11 = cow_cdecl(g, COW_IMG(0x100fd3a0u), 1, t9);
            t12 = g->edx;
            if ((uint8_t)t11 == 0u)
            {
                edx = t12;
                loc_8 = 0u;
            }
            else
            {
                edx = t12;
                wr32(sp0 - 8u, 3u);
                loc_8 = 3u;
            }
        }
    }
    else
    {
        edx = t8;
        wr32(sp0 - 8u, 5u);
        loc_8 = 5u;
    }
    g->esp = sp0 - 0x18u;
    t13 = cow_fastcall(g, COW_IMG(0x10084420u), self, edx, 0);
    t14 = rd32(sp0 - 8u) + rd16(COW_IMG(0x1035f5acu) + t13 * 2u);
    wr32(sp0 - 0x1cu, t14);
    wr32(sp0 - 0x20u, sp0 - 4u);
    g->edx = sp0 - 4u;
    t15 = rd32(sp0 - 8u);
    t16 = rd16(COW_IMG(0x1035f5acu) + t13 * 2u);
    t17 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 - 4u, t14);
    t18 = g->edx;
    wr32(sp0 - 0xcu, rd32(t17));
    if (rd32(t17) == 0u)
    {
        edx = t18;
        ebx = t13;
    }
    else
    {
        eax = rd32(t17);
        edx = t18;
        ebx = t13;
        edi = t16;
        loc_c = rd32(t17);
        wr32(sp0 - 0x1cu, 7u);
        wr32(sp0 - 0x20u, edi);
        wr32(sp0 - 0x24u, 1u);
        wr32(sp0 - 0x28u, eax);
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, COW_IMG(0x100d4410u), self, 4, eax, 1u, edi, 7u);
        t19 = g->edx;
        g->edx = t19;
        t20 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0xcu, 0);
        t21 = g->ecx;
        t22 = g->edx;
        if ((uint8_t)t20 == 0u)
        {
            ecx = t21;
            edx = t22;
            wr32(sp0 - 0x1cu, 0x14u);
            g->esp = sp0 - 0x10u;
            t26 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
            t27 = g->edx;
            if (t26 == 0u)
            {
                eax = t26;
                edx = t27;
                edi = 0u;
            }
            else
            {
                eax = t26;
                edx = t27;
                edi = t26;
                wr32(sp0 - 0x1cu, in_ebp);
                g->eax = eax;
                g->esp = sp0 - 0x1cu;
                t28 = cow_thiscall(g, COW_IMG(0x100814a0u), edi + 4u, 0);
                wr32(sp0 - 0x20u, self);
                t29 = rd32(self + 0x9ecu);
                wr32(edi, t29);
                g->edx = t29;
                t30 = cow_thiscall(g, COW_IMG(0x100814f0u), edi + 4u, 1, self);
                t31 = g->edx;
                wr32(edi + 0x10u, 1u);
                eax = t30;
                edx = t31;
            }
            wr32(sp0 - 0x1cu, 0u);
            wr32(sp0 - 0x20u, self);
            wr32(sp0 - 0x24u, edi);
            wr32(sp0 - 0x28u, COW_IMG(0x100d1400u));
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            cow_thiscall(g, COW_IMG(0x100710f0u), sp0 - 0xcu, 4, COW_IMG(0x100d1400u), edi, self, 0u);
            t32 = g->edx;
            edx = t32;
        }
        else
        {
            edx = t22;
            t23 = rd32(self + 0x9ecu);
            wr32(sp0 - 0x1cu, t23);
            t24 = rd32(sp0 - 0xcu);
            wr32(sp0 - 0x20u, t24);
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            cow_thiscall(g, COW_IMG(0x100d1450u), self, 2, t24, t23);
            t25 = g->edx;
            edx = t25;
        }
    }
    g->eax = rd32(self);
    t33 = rd32(self);
    g->esp = sp0 - 0x18u;
    t34 = cow_thiscall(g, rd32(t33 + 0x3d8u), self, 0);
    t35 = g->ecx;
    if ((int8_t)rd8(t34 + 9u) <= 0)
    {
        eax = t34;
        goto L_100d2a03;
    }
    eax = t34;
    if (rd8(self + 0x881u) != 1u)
    {
        eax = (eax & 0xffff0000u) | rd16(COW_IMG(0x1035f5c2u) + ebx * 4u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(COW_IMG(0x1035f5c0u) + ebx * 4u);
    }
    t36 = (uint16_t)eax + rd32(sp0 - 8u);
    wr32(sp0 - 0x1cu, t36);
    wr32(sp0 - 0x20u, sp0 - 4u);
    g->edx = t36;
    g->esp = sp0 - 0x18u;
    t37 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 - 4u, t36);
    t38 = g->edx;
    wr32(sp0 - 0xcu, rd32(t37));
    if (rd32(t37) == 0u)
    {
        eax = rd32(t37);
        goto L_100d2a03;
    }
    edx = t38;
    edi = (uint16_t)eax;
    eax = rd32(t37);
    loc_c = rd32(t37);
    wr32(sp0 - 0x1cu, 7u);
    wr32(sp0 - 0x20u, edi);
    wr32(sp0 - 0x24u, 2u);
    wr32(sp0 - 0x28u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x100d4410u), self, 4, eax, 2u, edi, 7u);
    t39 = g->edx;
    g->edx = t39;
    t40 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0xcu, 0);
    t41 = g->ecx;
    t42 = g->edx;
    if ((uint8_t)t40 == 0u)
    {
        ecx = t41;
        edx = t42;
        goto L_100d29bc;
    }
    eax = t40;
    t43 = rd32(self + 0x9ecu);
    wr32(sp0 - 0x1cu, t43);
    t44 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x20u, t44);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t45 = cow_thiscall(g, COW_IMG(0x100d1450u), self, 2, t44, t43);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    return t45;
L_100d29bc: ;
    wr32(sp0 - 0x1cu, 0x14u);
    g->esp = sp0 - 0x10u;
    t46 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t47 = g->edx;
    if (t46 == 0u)
    {
        eax = t46;
        edx = t47;
        edi = 0u;
    }
    else
    {
        eax = t46;
        edx = t47;
        edi = t46;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, COW_IMG(0x100814a0u), edi + 4u, 0);
        t48 = g->edx;
        wr32(sp0 - 0x1cu, self);
        t49 = rd32(self + 0x9ecu);
        wr32(edi, t49);
        g->eax = t49;
        g->edx = t48;
        t50 = cow_thiscall(g, COW_IMG(0x100814f0u), edi + 4u, 1, self);
        t51 = g->edx;
        wr32(edi + 0x10u, 2u);
        eax = t50;
        edx = t51;
    }
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, self);
    wr32(sp0 - 0x24u, edi);
    wr32(sp0 - 0x28u, COW_IMG(0x100d1400u));
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t52 = cow_thiscall(g, COW_IMG(0x100710f0u), sp0 - 0xcu, 4, COW_IMG(0x100d1400u), edi, self, 0u);
    eax = t52;
L_100d2a03: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d2800(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d2800(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
