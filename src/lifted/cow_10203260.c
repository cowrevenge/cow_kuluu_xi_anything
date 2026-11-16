/* f_0x10203260 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10203260(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    const uint32_t in_eax = g->eax;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 == 0u)
    {
        eax = in_eax;
        edx = 0x12u;
        ebx = in_ebx;
        esi = 0x12u;
    }
    else
    {
        eax = COW_IMG(0x10663af0u);
        ecx = 0u;
        ebx = in_ebx;
L_10203279: ;
        if (rd8(eax + 0x62u) == 0u)
        {
            ebx = (ebx & 0xffffff00u) | rd8(eax + 0x62u);
            goto L_10203284;
        }
        ebx = (ebx & 0xffffff00u) | rd8(eax + 0x62u);
        if (rd32(eax) == arg2) goto L_10203291;
L_10203284: ;
        if ((int32_t)(eax + 0x7cu) < (int32_t)COW_IMG(0x106643a8u))
        {
            eax = eax + 0x7cu;
            ecx = ecx + 1u;
            goto L_10203279;
        }
        eax = eax + 0x7cu;
        edx = 0x12u;
        esi = 0x12u;
    }
L_102032cd: ;
    if ((int32_t)edx >= (int32_t)esi) goto L_102032f8;
    ecx = edx;
    eax = COW_IMG(0x10663af0u) + edx * 0x7cu;
L_102032e5: ;
    if (rd8(eax + 0x62u) == 0u)
    {
        ebx = (ebx & 0xffffff00u) | rd8(eax + 0x62u);
        goto L_102032f0;
    }
    ebx = (ebx & 0xffffff00u) | rd8(eax + 0x62u);
    if (rd32(eax) == arg1) goto L_10203300;
L_102032f0: ;
    if ((int32_t)(ecx + 1u) < (int32_t)esi)
    {
        eax = eax + 0x7cu;
        ecx = ecx + 1u;
        goto L_102032e5;
    }
    eax = eax + 0x7cu;
L_102032f8: ;
    return eax & 0xffffff00u;
L_10203291: ;
    if ((int32_t)ecx < 0) goto L_102032a3;
    if ((int32_t)ecx > 5) goto L_102032a3;
    edx = 0u;
    esi = 6u;
    goto L_102032cd;
L_102032a3: ;
    if ((int32_t)ecx < 6) goto L_102032b9;
    if ((int32_t)ecx > 11) goto L_102032b9;
    edx = 6u;
    esi = 0xcu;
    goto L_102032cd;
L_102032b9: ;
    if ((int32_t)ecx < 12)
    {
        edx = 0x12u;
        esi = 0x12u;
    }
    else
    {
        if ((int32_t)ecx > 17)
        {
            edx = 0x12u;
            esi = 0x12u;
        }
        else
        {
            edx = 0xcu;
            esi = 0x12u;
        }
    }
    goto L_102032cd;
L_10203300: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10203260(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10203260(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
