/* f_0x10317199 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10317199(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_edi = g->edi;

    t1 = cow_fastcall(g, COW_IMG(0x103188a1u), self, in_edx, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd8(COW_IMG(0x109b26fcu)) == 0u)
    {
        eax = t1;
        edx = t3;
        goto L_103171ac;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->eax = eax;
    g->esp = sp0;
    t4 = cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, ecx, edx, 1, 3, 2u, in_edi, in_ebx);
    t5 = g->edx;
    if ((int32_t)rd32(COW_IMG(0x109f9420u)) <= 3)
    {
        eax = t4;
        ecx = 2u;
        edx = t5;
        ebx = 0u;
    }
    else
    {
        edx = t5;
        ecx = 2u;
        ebx = 0u;
        edi = 3u;
L_10321f0a: ;
        if (rd32(edi * 4u + rd32(COW_IMG(0x109f8414u))) == 0u)
        {
            eax = rd32(edi * 4u + rd32(COW_IMG(0x109f8414u)));
        }
        else
        {
            eax = rd32(edi * 4u + rd32(COW_IMG(0x109f8414u)));
            esi = edi << 2u;
            if ((rd8(eax + 0xcu) & 0x83u) != 0u)
            {
                g->edi = edi;
                g->esp = sp0 - 4u;
                t6 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, eax, in_esi, in_edi);
                t7 = g->edx;
                if (t6 == 0xffffffffu)
                {
                    ecx = eax;
                    eax = t6;
                    edx = t7;
                }
                else
                {
                    ecx = eax;
                    eax = t6;
                    edx = t7;
                    ebx = ebx + 1u;
                }
            }
            if ((int32_t)edi >= 20)
            {
                t8 = rd32(esi + rd32(COW_IMG(0x109f8414u))) + 0x20u;
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                cow_thiscall(g, rd32(COW_IMG(0x103292f4u)), ecx, 1, t8);
                t9 = g->ecx;
                t10 = g->edx;
                t11 = rd32(esi + rd32(COW_IMG(0x109f8414u)));
                g->esp = sp0 - 4u;
                cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, t9, t10, 1, 3, t11, in_esi, in_edi);
                t12 = g->edx;
                t13 = rd32(COW_IMG(0x109f8414u));
                wr32(esi + t13, 0u);
                eax = t13;
                ecx = t11;
                edx = t12;
            }
        }
        if ((int32_t)(edi + 1u) < (int32_t)rd32(COW_IMG(0x109f9420u)))
        {
            edi = edi + 1u;
            goto L_10321f0a;
        }
    }
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, ecx, edx, 1, 3, 2u, in_edi, in_ebx);
    t14 = g->edx;
    g->edi = in_edi;
    g->edx = t14;
    return ebx;
L_103171ac: ;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10317199(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10317199(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
