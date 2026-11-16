/* f_0x10325709 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10325709(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    ecx = rd32(arg2);
    edx = in_edx;
    ebx = in_ebx;
L_10325717: ;
    if (rd32(arg3) <= 1u) goto L_1032573a;
    t1 = cow_divs(g, rd32(sp0 + 4u), 0xau);
    t2 = cow_mods(g, rd32(sp0 + 4u), 0xau);
    t3 = rd32(sp0 + 4u);
    wr8(ecx, (uint8_t)((uint8_t)t2 + 0x30u));
    t4 = cow_divs(g, t3, 0xau);
    t5 = cow_mods(g, t3, 0xau);
    wr32(arg3, rd32(arg3) - 1u);
    wr32(sp0 + 4u, t4);
    if ((int32_t)t4 > 0)
    {
        ecx = ecx + 1u;
        edx = t5;
        ebx = 0xau;
        goto L_10325717;
    }
    ecx = ecx + 1u;
    edx = t5;
    ebx = 0xau;
L_1032573a: ;
    t6 = rd32(arg2);
    wr32(arg2, ecx);
    eax = t6;
    ecx = ecx - 1u;
L_1032573f: ;
    t7 = rd8(ecx);
    t8 = rd8(eax);
    wr8(ecx, (uint8_t)t8);
    wr8(eax, (uint8_t)t7);
    if (eax + 1u < ecx - 1u)
    {
        eax = eax + 1u;
        ecx = ecx - 1u;
        edx = (edx & 0xffffff00u) | t7;
        ebx = (ebx & 0xffffff00u) | t8;
        goto L_1032573f;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10325709(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10325709(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
