/* f_0x100cb390 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100cb390(Guest* g)
{
    double d11;
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0u)
    {
        edx = in_edx;
        edi = 0u;
L_100cb3a4: ;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t1 = cow_thiscall(g, COW_IMG(0x1002b5a0u), self + 0x674u, 0);
        t2 = g->edx;
        if (rd32(t1) == 0u)
        {
            edx = t2;
        }
        else
        {
            edx = t2;
            ebx = rd32(t1);
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t3 = cow_thiscall(g, COW_IMG(0x1002b5a0u), arg1 + 0x674u, 0);
            t4 = g->edx;
            if (rd32(t3) == 0u)
            {
                edx = t4;
            }
            else
            {
                edx = t4;
                esi = rd32(t3);
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t5 = cow_thiscall(g, COW_IMG(0x1001b1a0u), ebx + edi + 0x24u, 0);
                t6 = g->edx;
                g->edx = t6;
                t7 = cow_thiscall(g, COW_IMG(0x1001b1a0u), edi + esi + 0x24u, 0);
                t8 = g->edx;
                if (t7 == 0u)
                {
                    edx = t8;
                }
                else
                {
                    eax = t7;
                    edx = t8;
                    ebx = t5;
                    esi = t7;
                    if (ebx != 0u)
                    {
                        g->edx = rd32(ebx);
                        t9 = rd32(ebx);
                        g->esp = sp0 - 0x10u;
                        cow_thiscall(g, rd32(t9 + 0x30u), ebx, 0);
                        t10 = g->edx;
                        d11 = cow_take_float(g);
                        wrf32(esi + 0x24u, (float)d11);
                        edx = t10;
                    }
                }
            }
        }
        if ((int32_t)(edi + 0x14u) < 140)
        {
            edi = edi + 0x14u;
            goto L_100cb3a4;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100cb390(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100cb390(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
