/* f_0x10157b40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=3 */
uint32_t cow_fn_10157b40(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_edi);
    if (arg1 != 0u) goto L_10157b60;
    g->eax = arg1;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x101590a0u), self, 0);
    return t1 & 0xffffff00u;
L_10157b60: ;
    if (rd8(sp0 + 0xcu) != 0u)
    {
        eax = arg1;
        edx = in_edx;
        goto L_10157b7d;
    }
    wr32(sp0 - 0x14u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_call_regs(g, COW_IMG(0x10087070u), arg1, g->ecx, g->edx, 1, 1, 0u);
    t3 = g->edx;
    if ((uint8_t)t2 != 1u)
    {
        eax = t2;
        edx = t3;
        goto L_10157b7d;
    }
    eax = t2;
    g->ebx = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    return eax & 0xffffff00u;
L_10157b7d: ;
    if (self == 0u) goto L_10157b9b;
    g->esp = sp0 - 0x10u;
    t4 = cow_call_regs(g, COW_IMG(0x101597f0u), eax, self, edx, 1, 0);
    t5 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        edx = t5;
        goto L_10157b9b;
    }
    eax = t4;
    wr32(sp0 - 8u, rd32(eax));
    t6 = rd32(eax + 4u);
    wr32(sp0 - 4u, t6);
    edx = t6;
L_10157ba3: ;
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    if ((uint8_t)arg2 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg2;
        esi = self;
    }
    else
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg2;
        if (rd32(self + 0xc4u) == 0u)
        {
            esi = self;
        }
        else
        {
            if (rd8(self + 0x59u) != 0u)
            {
                esi = self;
            }
            else
            {
                esi = self + 0x28u;
            }
        }
    }
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t7 = cow_call_regs(g, COW_IMG(0x101598a0u), eax, esi, g->edx, 1, 0);
    t8 = g->edx;
    wr32(sp0 - 0x1cu, arg1);
    g->eax = arg1;
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x10159660u), esi, 1, arg1);
    t10 = g->ecx;
    t11 = g->edx;
    wr8(sp0 + 0xcu, (uint8_t)t9);
    if ((uint8_t)t9 != 1u)
    {
        eax = t9;
    }
    else
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        ebp = t7;
        if (ebp == 0u)
        {
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            cow_thiscall(g, COW_IMG(0x10037d70u), ecx, 0);
            t14 = g->edx;
            edx = t14;
        }
        else
        {
            if (ebp != arg1)
            {
                t12 = (rd32(ebp + 0x88u) & 0xffffff00u) | (rd32(ebp + 0x88u) & 0xfbu);
                wr32(ebp + 0x88u, t12);
                g->edx = edx;
                g->esp = sp0 - 0x18u;
                cow_thiscall(g, COW_IMG(0x10037dd0u), ecx, 0);
                t13 = g->edx;
                edx = t13;
            }
        }
        wr32(sp0 - 0x1cu, arg1);
        t15 = (rd32(arg1 + 0x88u) & 0xffffff00u) | (uint8_t)(rd32(arg1 + 0x88u) | 4u);
        wr32(arg1 + 0x88u, t15);
        g->eax = t15;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t16 = cow_thiscall(g, COW_IMG(0x101590c0u), self, 1, arg1);
        t17 = g->edx;
        g->edx = t17;
        t18 = cow_thiscall(g, COW_IMG(0x101598b0u), esi, 0);
        t19 = g->edx;
        wr32(sp0 - 0x1cu, t18);
        g->ebx = arg1;
        g->edx = t19;
        t20 = cow_stdcall(g, COW_IMG(0x10203520u), 1, t18);
        t21 = g->edx;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        t22 = cow_call_regs(g, COW_IMG(0x10159910u), t20, esi, t21, 0, 1, sp0 - 8u);
        t23 = g->edx;
        if ((uint8_t)t22 != 0u)
        {
            eax = t22;
        }
        else
        {
            eax = t22;
            edx = t23;
            wr32(sp0 - 0x1cu, 0u);
            g->eax = eax;
            g->esp = sp0 - 0x18u;
            t24 = cow_thiscall(g, COW_IMG(0x10157660u), self, 1, 0u);
            eax = t24;
        }
    }
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 0x14u);
    return (eax & 0xffffff00u) | rd8(sp0 + 0xcu);
L_10157b9b: ;
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0u);
    loc_c = in_ebx;
    loc_10 = in_edi;
    goto L_10157ba3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10157b40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10157b40(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
