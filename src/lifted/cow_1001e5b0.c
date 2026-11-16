/* f_0x1001e5b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1001e5b0(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1) == 2u) goto L_1001e5c0;
    eax = rd32(arg1) - 2u;
    if (eax != 3u)
    {
        eax = eax - 3u;
        edx = in_edx;
        goto L_1001e5f4;
    }
L_1001e5c0: ;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t2 = g->edx;
    if (rd32(COW_IMG(0x10456d6cu)) != t1)
    {
        eax = t1;
        ecx = rd32(COW_IMG(0x10456d6cu));
        edx = t2;
    }
    else
    {
        eax = t1;
        ecx = rd32(COW_IMG(0x10456d6cu));
        edx = t2;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0;
        t3 = cow_cdecl(g, COW_IMG(0x100150c0u), 1, 0u);
        t4 = g->edx;
        eax = t3;
        ecx = rd32(COW_IMG(0x10456d6cu));
        edx = t4;
    }
    if (ecx != 0u)
    {
        g->eax = eax;
        g->edx = rd32(ecx);
        t5 = rd32(ecx);
        g->esp = sp0;
        t6 = cow_thiscall(g, rd32(t5 + 0x18u), ecx, 1, 1u);
        t7 = g->edx;
        wr32(COW_IMG(0x10456d6cu), 0u);
        eax = t6;
        edx = t7;
    }
L_1001e5f4: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001e5b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1001e5b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
