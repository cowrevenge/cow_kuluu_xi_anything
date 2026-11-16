/* f_0x102102b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102102b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg2 != 0u)
    {
        if ((int32_t)rd32(COW_IMG(0x10664504u)) >= 0)
        {
            eax = rd32(COW_IMG(0x10664504u));
            if (eax <= rd32(arg1 + 4u))
            {
                t1 = (eax & 0xffffff00u) | rd8(arg1 + 2u);
                g->eax = t1;
                g->ecx = arg1;
                g->edx = in_edx;
                g->esp = sp0;
                t2 = cow_cdecl(g, COW_IMG(0x100f89d0u), 2, t1, eax);
                t3 = g->ecx;
                t4 = g->edx;
                if ((uint8_t)t2 != 0u)
                {
                    eax = t2;
                    ecx = t3;
                    edx = t4;
                    g->esp = sp0;
                    cow_stdcall(g, COW_IMG(0x100f8a40u), 0);
                }
            }
        }
    }
    wr8(rd32(COW_IMG(0x1066451cu)) + 0x10u, 0u);
    t5 = rd32(rd32(COW_IMG(0x10664508u)) + 8u);
    g->eax = t5;
    t6 = rd32(COW_IMG(0x10664508u));
    g->esp = sp0;
    t7 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t6, 2, t5, 0u);
    t8 = g->edx;
    g->edx = t8;
    return t7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102102b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102102b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
