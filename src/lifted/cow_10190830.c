/* f_0x10190830 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10190830(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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

    if (rd8(arg1) == 0u)
    {
        loc_4 = 0u;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(arg1);
        ecx = self;
        edx = in_edx;
        esi = 0u;
        loc_4 = 0u;
L_10190844: ;
        if (rd8(arg1 + esi) == 0x7fu)
        {
            eax = (eax & 0xffffff00u) | rd8(arg1 + esi);
            goto L_10190890;
        }
        edi = arg1 + esi;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t1 = cow_cdecl(g, COW_IMG(0x1011c900u), 1, edi);
        t2 = g->ecx;
        t3 = g->edx;
        if ((uint8_t)t1 == 0u)
        {
            ecx = t2;
            edx = t3;
            goto L_10190875;
        }
        eax = t1;
        ecx = t2;
        edx = t3;
        t4 = (eax & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)rd8(edi);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t5 = cow_cdecl(g, COW_IMG(0x1011cec0u), 1, t4);
        t6 = g->edx;
        eax = t5;
        ecx = loc_4 + t5;
        edx = t6;
        esi = esi + 1u;
        loc_4 = loc_4 + t5;
L_10190893: ;
        if (rd8(arg1 + esi) != 0u) goto L_10190844;
    }
    return loc_4;
L_10190875: ;
    t7 = rd8(arg1 + esi + 1u) | rd8(edi) << 8u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t8 = cow_cdecl(g, COW_IMG(0x1011cec0u), 1, t7);
    t9 = g->edx;
    eax = t8;
    ecx = loc_4 + t8;
    edx = t9;
    loc_4 = loc_4 + t8;
L_10190890: ;
    esi = esi + 2u;
    goto L_10190893;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10190830(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10190830(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
