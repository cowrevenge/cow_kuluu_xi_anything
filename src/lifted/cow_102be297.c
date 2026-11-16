/* f_0x102be297 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_102be297(Guest* g)
{
    double d4;
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg3 != 0u)
    {
        wr8(arg1 + 0x70u, rd8(arg1 + 0x70u) | 0x80u);
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x103169e0u), 5, arg1 + 0x138u, arg2, 0xau, in_edi, in_esi);
        t3 = g->edx;
        d4 = rdf64(sp0 + 0x14u);
        wrf32(arg1 + 0x134u, (float)d4);
        wr8(arg1 + 0x130u, (uint8_t)arg3);
        wr32(arg1 + 0x70u, rd32(arg1 + 0x70u) | (-(arg4 != 0u) & 0x100u));
        if (arg4 == 0u)
        {
            edx = t3;
            goto L_102be300;
        }
        edx = t3;
        if ((rd8(arg1 + 0x126u) & 2u) == 0u)
        {
            eax = -(arg4 != 0u) & 0x100u;
            goto L_102be310;
        }
        eax = -(arg4 != 0u) & 0x100u;
    }
    else
    {
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        t1 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, COW_IMG(0x103c7fa4u));
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
L_102be314: ;
    g->edx = edx;
    return eax;
L_102be300: ;
    if (rd16(arg2 + 2u) != rd16(arg2 + 4u))
    {
        eax = rd16(arg2 + 2u);
        goto L_102be314;
    }
    eax = rd16(arg2 + 2u);
    if ((uint16_t)eax != rd16(arg2 + 6u)) goto L_102be314;
L_102be310: ;
    wr8(arg1 + 0x69u, rd8(arg1 + 0x69u) | 8u);
    goto L_102be314;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102be297(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102be297(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
