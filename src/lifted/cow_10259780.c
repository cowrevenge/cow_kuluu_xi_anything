/* f_0x10259780 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10259780(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10259120u), self, 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd32(t2) != 1u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    else
    {
        ecx = t2;
        edx = t3;
        if (rd32(ecx + 4u) == 0u)
        {
            eax = rd32(ecx + 4u);
        }
        else
        {
            eax = rd32(ecx + 4u);
            edi = arg1;
L_1025979c: ;
            if (rd32(eax + 8u) != 2u)
            {
                edx = rd32(eax + 8u);
                goto L_102597ac;
            }
            t4 = rd32(eax + 0xcu);
            wr32(eax + 0x10u, arg1);
            edx = t4;
L_102597c6: ;
            wr32(arg1 + 0x14u, edx);
L_102597c9: ;
            if (rd32(eax + 4u) != 0u)
            {
                eax = rd32(eax + 4u);
                goto L_1025979c;
            }
            eax = rd32(eax + 4u);
        }
        wr32(ecx, 0u);
    }
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10259150u), ecx, 0);
    return;
L_102597ac: ;
    if (edx != 3u) goto L_102597bb;
    t5 = rd32(eax + 0xcu);
    wr32(eax + 0x10u, arg1);
    edx = t5;
    edi = eax;
    goto L_102597c6;
L_102597bb: ;
    if (edx != 4u) goto L_102597c9;
    wr32(eax + 0x10u, arg1);
    edx = rd32(edi + 0xcu);
    goto L_102597c6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10259780(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10259780(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
