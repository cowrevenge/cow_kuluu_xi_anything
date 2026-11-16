/* f_0x102a5f90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102a5f90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0u)
    {
        if (rd32(COW_IMG(0x109a2864u)) != 0u)
        {
            eax = rd32(COW_IMG(0x109a2864u));
L_102a5fa4: ;
            if ((int32_t)rd32(eax) > 0)
            {
                ecx = 0u;
                edx = eax + 4u;
L_102a5faf: ;
                if (rd32(edx) == arg1)
                {
                    wr32(edx, 0u);
                    if (rd32(eax + 0x104u) == 0u)
                    {
                        if (ecx + 1u == rd32(eax))
                        {
                            wr32(eax, ecx);
                        }
                    }
                }
                if ((int32_t)(ecx + 1u) < (int32_t)rd32(eax))
                {
                    ecx = ecx + 1u;
                    edx = edx + 4u;
                    goto L_102a5faf;
                }
            }
            if (rd32(eax + 0x104u) != 0u)
            {
                eax = rd32(eax + 0x104u);
                goto L_102a5fa4;
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a5f90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102a5f90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
