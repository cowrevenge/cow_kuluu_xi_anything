/* f_0x10273940 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10273940(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(arg1) & 1u)
    {
        if (rd32(arg1 + 0x10u) == 0u)
        {
            edx = in_edx;
        }
        else
        {
            eax = rd32(arg1 + 0x10u);
            g->edx = in_edx;
            g->esp = sp0 - 8u;
            cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103b24f4u), 0x78u);
            t1 = g->edx;
            wr32(arg1 + 0x10u, 0u);
            wr32(arg1 + 4u, 0xffffffffu);
            wr32(arg1 + 8u, 0u);
            wr32(arg1 + 0xcu, 0u);
            edx = t1;
        }
        if (rd32(arg1 + 0x20u) != 0u)
        {
            if ((int32_t)rd32(arg1 + 0x18u) <= 0)
            {
                eax = rd32(arg1 + 0x18u);
            }
            else
            {
                ebx = 0u;
                edi = 0u;
L_1027398a: ;
                t2 = edi + rd32(arg1 + 0x20u) + 8u;
                g->ecx = t2;
                g->esp = sp0 - 0x10u;
                cow_cdecl(g, COW_IMG(0x1027e0f0u), 1, t2);
                t3 = g->ecx;
                t4 = edi + rd32(arg1 + 0x20u) + 0x70u;
                g->edx = rd32(arg1 + 0x20u);
                t5 = rd32(arg1 + 0x20u);
                g->esp = sp0 - 0x14u;
                cow_cdecl(g, COW_IMG(0x1027e0f0u), 1, t4);
                t6 = g->edx;
                if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg1 + 0x18u))
                {
                    edx = t6;
                    ebx = ebx + 1u;
                    edi = edi + 0xd8u;
                    goto L_1027398a;
                }
                eax = rd32(arg1 + 0x18u);
                edx = t6;
            }
            t7 = rd32(arg1 + 0x20u);
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x10276110u), 3, t7, COW_IMG(0x103b24f4u), 0x86u);
            wr32(arg1 + 0x20u, 0u);
            wr32(arg1 + 0x14u, 0xffffffffu);
            wr32(arg1 + 0x18u, 0u);
            wr32(arg1 + 0x1cu, 0u);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10273940(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10273940(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
