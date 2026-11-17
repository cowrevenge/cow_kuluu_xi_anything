/* f_0x102f4b4c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102f4b4c(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_ec;
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
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 272u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0xecu, in_esi);
    wr32(self + 0xacu, rd32(COW_IMG(0x109b2640u)));
    wr32(COW_IMG(0x109b2640u), self);
    wr32(self + 4u, arg1);
    wr32(sp0 - 0xf0u, arg1);
    g->esp = sp0 - 0xecu;
    cow_thiscall(g, rd32(rd32(arg1) + 4u), rd32(arg1), 1, arg1);
    wr32(sp0 - 0xf0u, sp0 - 0xe8u);
    t1 = rd32(self + 4u);
    wr32(sp0 - 0xf4u, t1);
    cow_thiscall(g, rd32(rd32(rd32(self + 4u)) + 0x1cu), rd32(rd32(self + 4u)), 2, t1, sp0 - 0xe8u);
    wr32(sp0 - 0xf0u, sp0 - 0x14u);
    t2 = rd32(self + 4u);
    wr32(sp0 - 0xf4u, t2);
    g->edx = sp0 - 0x14u;
    cow_thiscall(g, rd32(rd32(rd32(self + 4u)) + 0x24u), rd32(rd32(self + 4u)), 2, t2, sp0 - 0x14u);
    t3 = g->edx;
    t4 = rd32(sp0 - 0xdcu) & 0x20000000u;
    wr32(self + 0x50u, t4);
    wr32(self + 0x58u, 0x40u);
    wr32(self + 0x5cu, 0x10u);
    wr32(self + 0x54u, 0x15u);
    g->eax = t4;
    g->edx = t3;
    t5 = cow_thiscall(g, COW_IMG(0x102f4a63u), self, 0);
    t6 = g->ecx;
    t7 = g->edx;
    if ((int32_t)t5 < 0)
    {
        eax = t5;
        ebx = in_ebx;
        edi = in_edi;
        loc_4 = in_ebp;
        loc_ec = in_esi;
    }
    else
    {
        ecx = t6;
        edx = t7;
        wr32(sp0 - 0xf0u, self + 0xcu);
        t8 = rd32(self + 4u);
        wr32(sp0 - 0xf4u, t8);
        g->eax = self + 0xcu;
        g->edx = edx;
        g->esp = sp0 - 0xecu;
        t9 = cow_stdcall(g, COW_IMG(0x102dadcau), 2, t8, self + 0xcu);
        t10 = g->edx;
        if ((int32_t)t9 < 0)
        {
            eax = t9;
            ebx = in_ebx;
            edi = in_edi;
            loc_4 = in_ebp;
            loc_ec = in_esi;
        }
        else
        {
            edx = t10;
            wr32(sp0 - 0xf0u, in_ebx);
            wr32(sp0 - 0xf4u, in_edi);
            wr32(sp0 - 0xf8u, 0xau);
            edi = self + 0x70u;
            eax = 0u;
            ecx = 0xau;
            while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wr32(sp0 - 0xf8u, 0u);
            wr32(self + 0x70u, 0x28u);
            wr32(self + 0x74u, 0x100u);
            wr32(self + 0x78u, 0x100u);
            wr16(self + 0x7cu, 1u);
            wr32(self + 0x80u, 0u);
            wr16(self + 0x7eu, 0x20u);
            wr32(self + 0xa4u, 0x15u);
            g->eax = 0x100u;
            g->edx = edx;
            g->esp = sp0 - 0xf4u;
            t11 = cow_stdcall(g, rd32(COW_IMG(0x10329050u)), 1, 0u);   /* gdi32.dll!CreateCompatibleDC */
            t12 = g->edx;
            wr32(self + 0x6cu, t11);
            if (t11 != 0u)
            {
                eax = t11;
                edx = t12;
                goto L_102f4c2a;
            }
L_102f4c23: ;
            eax = 0x8007000eu;
L_102f4c86: ;
            ebx = rd32(sp0 - 0xf0u);
            edi = rd32(sp0 - 0xf4u);
            loc_4 = rd32(sp0 - 4u);
            loc_ec = rd32(sp0 - 0xecu);
        }
    }
    g->ebx = ebx;
    g->esi = loc_ec;
    g->edi = edi;
    g->ebp = loc_4;
    return eax;
L_102f4c2a: ;
    wr32(self + 0x78u, -rd32(self + 0x78u));
    wr32(sp0 - 0xf8u, 0u);
    wr32(sp0 - 0xfcu, 0u);
    wr32(sp0 - 0x100u, self + 0xa0u);
    wr32(sp0 - 0x104u, 0u);
    wr32(sp0 - 0x108u, self + 0x70u);
    wr32(sp0 - 0x10cu, eax);
    g->eax = eax;
    g->ecx = self + 0xa0u;
    g->edx = edx;
    g->esp = sp0 - 0xf4u;
    t13 = cow_stdcall(g, rd32(COW_IMG(0x10329040u)), 6, eax, self + 0x70u, 0u, self + 0xa0u, 0u, 0u);   /* gdi32.dll!CreateDIBSection */
    t14 = g->ecx;
    t15 = g->edx;
    wr32(self + 0x98u, t13);
    if (t13 == 0u) goto L_102f4c23;
    eax = t13;
    ecx = t14;
    edx = t15;
    wr32(self + 0x78u, -rd32(self + 0x78u));
    wr32(sp0 - 0xf8u, 2u);
    t16 = rd32(self + 0x6cu);
    wr32(sp0 - 0xfcu, t16);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xf4u;
    t17 = cow_stdcall(g, rd32(COW_IMG(0x10329044u)), 2, t16, 2u);   /* gdi32.dll!SetBkMode */
    t18 = g->ecx;
    t19 = g->edx;
    wr32(sp0 - 0xf8u, 0u);
    t20 = rd32(self + 0x6cu);
    wr32(sp0 - 0xfcu, t20);
    g->ecx = t18;
    g->edx = t19;
    t21 = cow_stdcall(g, rd32(COW_IMG(0x10329048u)), 2, t20, 0u);   /* gdi32.dll!SetBkColor */
    t22 = g->ecx;
    t23 = g->edx;
    wr32(sp0 - 0xf8u, 0xffffffu);
    t24 = rd32(self + 0x6cu);
    wr32(sp0 - 0xfcu, t24);
    g->ecx = t22;
    g->edx = t23;
    t25 = cow_stdcall(g, rd32(COW_IMG(0x1032904cu)), 2, t24, 0xffffffu);   /* gdi32.dll!SetTextColor */
    t26 = g->ecx;
    t27 = g->edx;
    t28 = rd32(self + 0x98u);
    wr32(sp0 - 0xf8u, t28);
    t29 = rd32(self + 0x6cu);
    wr32(sp0 - 0xfcu, t29);
    t30 = cow_stdcall(g, rd32(COW_IMG(0x10329064u)), 2, t29, t28);   /* gdi32.dll!SelectObject */
    wr32(self + 0x9cu, t30);
    eax = 0u;
    goto L_102f4c86;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f4b4c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f4b4c(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
