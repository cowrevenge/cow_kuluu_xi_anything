/* f_0x101e5cd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101e5cd0(Guest* g)
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
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg2 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg2;
        edx = in_edx;
    }
    else
    {
        if (rd8(COW_IMG(0x10663558u)) == 1u)
        {
            eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10663558u));
            goto L_101e5ce6;
        }
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10663558u));
        if ((uint8_t)eax != 2u)
        {
            edx = in_edx;
            goto L_101e5d56;
        }
L_101e5ce6: ;
        t1 = (self & 0xffffff00u) | rd8(COW_IMG(0x10663559u));
        g->ecx = t1;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t2 = cow_cdecl(g, COW_IMG(0x100e95e0u), 8, eax, t1, arg1, 1u, COW_IMG(0x1037f448u), 0u, 0u, 0u);
        t3 = g->ecx;
        t4 = g->edx;
        if ((uint8_t)t2 == 0u)
        {
            eax = t2;
            edx = t4;
        }
        else
        {
            ecx = t3;
            g->ecx = ecx;
            g->edx = rd8(COW_IMG(0x10663559u));
            t5 = rd8(COW_IMG(0x10663559u));
            g->esp = sp0 - 4u;
            t6 = cow_cdecl(g, COW_IMG(0x101cb7a0u), 2, t5, (uint8_t)arg1);
            t7 = g->ecx;
            t8 = g->edx;
            if (t6 == 0u)
            {
                edx = t8;
            }
            else
            {
                eax = t6;
                ecx = t7;
                edx = t8;
                t9 = rd32(eax);
                wr8(COW_IMG(0x10663514u), rd8(COW_IMG(0x10663558u)));
                wr32(COW_IMG(0x10663518u), t9);
                wr8(COW_IMG(0x1066351cu), 1u);
                wr8(COW_IMG(0x1066351du), 0x3cu);
            }
            if (rd32(COW_IMG(0x10663520u)) == 0u)
            {
                eax = rd32(COW_IMG(0x10663520u));
            }
            else
            {
                eax = rd32(COW_IMG(0x10663520u));
                wr8(eax + 0x65u, rd8(eax + 0x65u) | 1u);
            }
        }
    }
L_101e5d56: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e5cd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e5cd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
