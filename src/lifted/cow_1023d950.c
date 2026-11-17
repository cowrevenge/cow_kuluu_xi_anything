/* f_0x1023d950 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1023d950(Guest* g)
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    g->esi = self;
    g->esp = sp0 - 0x10u;
    cow_fastcall(g, COW_IMG(0x101f7020u), self, in_edx, 3, 0u, 0u, 1u);
    t1 = g->ecx;
    t2 = g->edx;
    if (rd32(self + 0x58u) == 0u)
    {
        ecx = t1;
        edx = t2;
    }
    else
    {
        eax = rd32(self + 0x58u);
        ecx = t1;
        edx = t2;
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t3 = g->ecx;
        t4 = g->edx;
        wr32(self + 0x58u, 0u);
        ecx = t3;
        edx = t4;
    }
    if (rd32(self + 0x58u) != 0u)
    {
        edi = in_edi;
    }
    else
    {
        t5 = (uint32_t)(int16_t)rd16(self + 0x54u) * 0x54u;
        g->eax = t5;
        t6 = rd16(self + 0x54u);
        g->esp = sp0 - 8u;
        t7 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t5, in_edi, in_esi);
        t8 = g->edx;
        if (t7 == 0u)
        {
            edx = t8;
            edi = (uint32_t)(int16_t)t6;
            ebp = 0u;
        }
        else
        {
            edx = t8;
            ebp = t7;
            edi = (uint32_t)(int16_t)t6;
            if ((int32_t)(edi - 1u) >= 0)
            {
                eax = edi - 1u;
                ebx = ebp;
                edi = eax + 1u;
L_1023d9ad: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t9 = cow_thiscall(g, COW_IMG(0x101f4af0u), ebx, 0);
                t10 = g->edx;
                if (edi != 1u)
                {
                    eax = t9;
                    edx = t10;
                    ebx = ebx + 0x54u;
                    edi = edi - 1u;
                    goto L_1023d9ad;
                }
                edx = t10;
                edi = edi - 1u;
            }
        }
        wr32(self + 0x58u, ebp);
    }
    if ((int16_t)rd16(self + 0x54u) > 0)
    {
        ebx = 0u;
        ebp = 0u;
        edi = self + 0x60u;
L_1023d9ce: ;
        if (rd32(edi + 0xccu) == 0u)
        {
            eax = 0x80808080u;
        }
        else
        {
            eax = 0x80404040u;
        }
        g->esp = sp0 - 0x10u;
        cow_fastcall(g, COW_IMG(0x101f4b20u), ebp + rd32(self + 0x58u), edx, 4, 0u, 3u, edi, eax);
        t11 = g->edx;
        if ((int32_t)(ebx + 1u) < (int16_t)rd16(self + 0x54u))
        {
            edx = t11;
            ebx = ebx + 1u;
            ebp = ebp + 0x54u;
            edi = edi + 0xd4u;
            goto L_1023d9ce;
        }
        edx = t11;
        edi = edi + 0xd4u;
    }
    t12 = (edx & 0xffff0000u) | rd16(self + 0x54u);
    t13 = rd32(self + 0x58u);
    g->esi = self;
    g->edi = edi;
    g->esp = sp0 - 0x10u;
    cow_fastcall(g, COW_IMG(0x101f7020u), self, t12, 3, t13, t12, 1u);
    wr8(self + 0x51u, 0u);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023d950(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1023d950(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
