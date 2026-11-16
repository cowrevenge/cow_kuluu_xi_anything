/* f_0x1014b950 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1014b950(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    g->esi = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x101f7020u), self, 3, 0u, 0u, 1u);
    t1 = g->ecx;
    t2 = g->edx;
    t3 = rd32(self + 0x50u);
    wr32(self + 0x3cu, 0u);
    wr8(self + 0x44u, 0x20u);
    wr8(self + 0x45u, 0x18u);
    if (t3 == 0u)
    {
        eax = t3;
        ecx = t1;
        edx = t2;
    }
    else
    {
        eax = t3;
        ecx = t1;
        edx = t2;
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t4 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(self + 0x50u, 0u);
        eax = t4;
        ecx = t5;
        edx = t6;
    }
    if (rd32(self + 0x50u) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 8u;
        t7 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x2a0u, in_edi, in_esi);
        t8 = g->edx;
        if (t7 == 0u)
        {
            edx = t8;
            ebp = 0u;
        }
        else
        {
            eax = t7;
            edx = t8;
            ebp = t7;
            ebx = 8u;
            edi = ebp;
L_1014b99e: ;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t9 = cow_thiscall(g, COW_IMG(0x101f4af0u), edi, 0);
            t10 = g->edx;
            if (ebx != 1u)
            {
                eax = t9;
                edx = t10;
                ebx = ebx - 1u;
                edi = edi + 0x54u;
                goto L_1014b99e;
            }
            edx = t10;
        }
        wr32(self + 0x50u, ebp);
    }
    wr16(self + 0x54u, 0u);
    if (rd32(COW_IMG(0x10578448u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10578448u));
        wr16(self + 0x54u, 0u);
        ebp = 0u;
L_1014b9c9: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t11 = cow_thiscall(g, COW_IMG(0x10161770u), rd32(COW_IMG(0x10578448u)), 1, ebp);
        t12 = g->edx;
        if (t11 == 0u)
        {
            eax = t11;
            edx = t12;
        }
        else
        {
            eax = t11;
            edx = t12;
            ebx = t11;
            if (rd16(ebx) == 0u)
            {
                edx = (edx & 0xffff0000u) | rd16(ebx);
            }
            else
            {
                edx = (edx & 0xffff0000u) | rd16(ebx);
                if (rd16(ebx + 4u) != 0u)
                {
                    t13 = rd16(self + 0x54u) * 0x54u + rd32(self + 0x50u);
                    g->eax = rd16(self + 0x54u) * 0x15u;
                    t14 = rd16(self + 0x54u);
                    g->esp = sp0 - 0x10u;
                    t15 = cow_fastcall(g, COW_IMG(0x101f4b20u), t13, (uint16_t)edx, 4, 1u, 0x49u, (uint16_t)edx, 0x80808080u);
                    t16 = rd16(ebx);
                    wr32(t13 + 0x48u, t16);
                    wr16(self + 0x54u, (uint16_t)(rd16(self + 0x54u) + 1u));
                    eax = t15;
                    edx = t16;
                }
            }
        }
        if ((int32_t)(ebp + 1u) < 8)
        {
            ebp = ebp + 1u;
            goto L_1014b9c9;
        }
        t17 = (eax & 0xffff0000u) | rd16(self + 0x54u);
        t18 = rd32(self + 0x50u);
        g->esi = self;
        g->eax = t17;
        g->esp = sp0 - 0x10u;
        t19 = cow_thiscall(g, COW_IMG(0x101f7020u), self, 3, t18, t17, 1u);
        t20 = rd8(self + 0x56u);
        cow_call_regs(g, COW_IMG(0x101f7080u), t19, self, g->edx, 0, 2, t20, 0u);
    }
    g->esi = in_esi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014b950(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1014b950(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
