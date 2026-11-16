/* f_0x101e8200 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101e8200(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    wr32(COW_IMG(0x10663644u), arg2);
    if (arg2 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        eax = COW_IMG(0x10381833u);
        edx = arg2 + 0x24u;
L_101e8216: ;
        if (!(rd8(edx) & 1u))
        {
            wr8(eax - 2u, rd8(eax - 2u) & 0xfdu);
            wr8(eax - 1u, 0xffu);
        }
        else
        {
            wr8(eax - 2u, rd8(eax - 2u) | 2u);
            wr8(eax - 1u, 0x16u);
        }
        t1 = rd32(edx);
        wr8(eax, t1 >> 1u & 7u);
        if ((int8_t)(t1 >> 1u & 7u) <= 3)
        {
            ecx = (t1 >> 1u & 0xffffff00u) | (t1 >> 1u & 7u);
        }
        else
        {
            ecx = (t1 >> 1u & 0xffffff00u) | (t1 >> 1u & 7u);
            wr8(eax, 4u);
        }
        wr8(eax, (uint8_t)(rd8(eax) + 9u));
        if ((int32_t)(eax + 0x20u) < (int32_t)COW_IMG(0x10381b73u))
        {
            eax = eax + 0x20u;
            edx = edx + 0xcu;
            goto L_101e8216;
        }
        eax = eax + 0x20u;
        edx = edx + 0xcu;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e8200(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e8200(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
