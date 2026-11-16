/* f_0x10099730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10099730(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
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

    ecx = self;
    edx = in_edx;
    ebx = 0u;
L_10099735: ;
    if (rd32(ebx + rd32(COW_IMG(0x104dfd98u)) + 0x57ecu) != 0u)
    {
        eax = rd32(ebx + rd32(COW_IMG(0x104dfd98u)) + 0x57ecu);
        esi = ebx + rd32(COW_IMG(0x104dfd98u)) + 0x57d8u;
        if (rd16(esi + 0x4cu) != 0u)
        {
            eax = (eax & 0xffff0000u) | rd16(esi + 0x4cu);
            if (rd8(esi + 0x50u) != 0u)
            {
                ecx = (ecx & 0xffffff00u) | rd8(esi + 0x50u);
            }
            else
            {
                ecx = (ecx & 0xffffff00u) | rd8(esi + 0x50u);
                edi = esi + 0x50u;
                if ((uint16_t)(eax + 0x7000u) != 0u)
                {
                    eax = eax + 0x7000u;
                    g->eax = (uint16_t)eax;
                    g->edx = edx;
                    t1 = rd32(COW_IMG(0x10621808u));
                    g->esp = sp0 - 0xcu;
                    t2 = cow_thiscall(g, COW_IMG(0x1015b9e0u), t1, 1, (uint16_t)eax);
                    t3 = g->ecx;
                    t4 = g->edx;
                    if (t2 == 0u)
                    {
                        ecx = t3;
                        edx = t4;
                    }
                    else
                    {
                        eax = t2;
                        edx = t4;
                        t5 = rd32(eax + 0x1538u);
                        t6 = (edx & 0xffffff00u) | rd8(esi + 0x4fu);
                        t7 = (eax & 0xffffff00u) | rd8(esi + 0x4eu);
                        g->ecx = t5;
                        g->edx = t6;
                        g->esp = sp0 - 0xcu;
                        cow_cdecl(g, COW_IMG(0x100935c0u), 5, edi, t7, t6, t5, 0x18u);
                        t8 = g->ecx;
                        t9 = g->edx;
                        ecx = t8;
                        edx = t9;
                    }
                }
            }
        }
    }
    if ((int32_t)(ebx + 0x70u) < 2240)
    {
        ebx = ebx + 0x70u;
        goto L_10099735;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10099730(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10099730(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
