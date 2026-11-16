/* f_0x10114250 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10114250(Guest* g)
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
    uint32_t t2;
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

    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, rd32(COW_IMG(0x103291c8u)), self, 2, t1, 0xffffffffu);
    t3 = g->edx;
    if (t2 == 0xffffffffu)
    {
        edx = t3;
        goto L_10114314;
    }
    eax = t2;
    edx = t3;
    t4 = (eax & 0xffff0000u) | rd16(self + 0x10au);
    t5 = rd32(sp0 + 4u);
    wr16(self + 0x10au, (uint16_t)(t4 + 1u));
    if (self + (uint16_t)t4 * 0x10u + 8u == t5)
    {
        eax = t4 + 1u;
        ecx = (uint16_t)t4 << 4u;
    }
    else
    {
        ecx = (uint16_t)t4 << 4u;
        ebx = t5;
        esi = self + (uint16_t)t4 * 0x10u + 8u;
        if (rd32(esi + 8u) != 0u)
        {
            eax = rd32(esi + 8u);
            t6 = rd32(eax) - 1u;
            t7 = rd32(eax);
            wr32(eax, t6);
            if (t7 >= 2u)
            {
                ecx = t7;
            }
            else
            {
                ecx = t7;
                edx = t6;
                if (rd32(rd32(esi + 8u) + 4u) == 0u)
                {
                    eax = rd32(rd32(esi + 8u) + 4u);
                }
                else
                {
                    eax = rd32(rd32(esi + 8u) + 4u);
                    g->eax = eax;
                    g->esp = sp0 - 4u;
                    t8 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, eax, in_esi, in_ebx);
                    t9 = g->edx;
                    eax = t8;
                    edx = t9;
                }
                t10 = rd32(esi + 8u);
                g->ecx = t10;
                g->esp = sp0 - 0xcu;
                cow_cdecl(g, COW_IMG(0x10311bf0u), 1, t10);
                t11 = g->ecx;
                ecx = t11;
            }
            wr32(esi + 8u, 0u);
        }
        t12 = rd32(ebx);
        wr32(esi, t12);
        t13 = rd32(ebx + 4u);
        wr32(esi + 4u, t13);
        t14 = rd32(ebx + 8u);
        t15 = rd32(ebx + 8u);
        wr32(esi + 8u, t14);
        if (t15 == 0u)
        {
            eax = t14;
            edx = t12;
        }
        else
        {
            eax = t14;
            edx = t12;
            wr32(eax, rd32(eax) + 1u);
        }
    }
    wr16(self + 0x10au, rd16(self + 0x10au) & 0xfu);
    if (rd16(self + 0x10au) != rd16(self + 0x108u))
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x108u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x108u);
        wr16(self + 0x108u, (uint8_t)eax + 1u & 0xfu);
        eax = (uint8_t)eax + 1u & 0xfu;
    }
    t16 = rd32(self);
    wr32(sp0 + 4u, t16);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, rd32(COW_IMG(0x103291ccu)), eax, t16, edx);
    return;
L_10114314: ;
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10114250(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10114250(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
