/* f_0x10270080 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10270080(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1 * 0xacu + rd32(COW_IMG(0x1099aed0u)) + 0xa8u) != 0u)
    {
        edx = rd32(COW_IMG(0x1099aed0u));
        edi = rd32(arg1 * 0xacu + rd32(COW_IMG(0x1099aed0u)) + 0xa8u);
        if ((int32_t)rd32(edi + 0x24u) > 0)
        {
            ebx = 0u;
L_102700b0: ;
            t1 = rd32(rd32(ebx * 4u + rd32(edi + 0x1cu)) + 0x14u);
            g->eax = rd32(edi + 0x1cu);
            g->ecx = t1;
            g->edx = edx;
            t2 = rd32(edi + 0x1cu);
            t3 = rd32(ebx * 4u + rd32(edi + 0x1cu));
            g->esp = sp0 - 0x10u;
            t4 = cow_stdcall(g, COW_IMG(0x10281a80u), 0);
            t5 = g->ecx;
            t6 = g->edx;
            if ((int32_t)rd32(t3 + 0x18u) < 0)
            {
                edx = t6;
            }
            else
            {
                eax = t4;
                ecx = t5;
                edx = t6;
                esi = rd32(t3 + 0x18u);
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                cow_stdcall(g, COW_IMG(0x10281a80u), 0);
                t7 = g->edx;
                edx = t7;
            }
            if ((int32_t)(ebx + 1u) < (int32_t)rd32(edi + 0x24u))
            {
                ebx = ebx + 1u;
                goto L_102700b0;
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10270080(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10270080(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
