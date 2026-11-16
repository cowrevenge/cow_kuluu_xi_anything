/* f_0x1007b6a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1007b6a0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 == 0u) goto L_1007b6f5;
    if (arg2 == 0u) goto L_1007b6f5;
    if (rd32(arg2) == 0u) goto L_1007b6f5;
    ecx = self;
    ebx = in_ebx;
    esi = rd32(arg2);
    edi = 0u;
L_1007b6bd: ;
    eax = arg1;
L_1007b6bf: ;
    if (rd8(eax) != rd8(esi))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        ebx = (ebx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(esi);
        goto L_1007b6e3;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    ebx = (ebx & 0xffffff00u) | rd8(eax);
    if ((uint8_t)ecx == 0u) goto L_1007b6df;
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        ebx = (ebx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_1007b6e3;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    ebx = (ebx & 0xffffff00u) | rd8(eax + 1u);
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_1007b6bf;
    }
L_1007b6df: ;
    eax = 0u;
L_1007b6e8: ;
    if (eax == 0u) goto L_1007b6fc;
    if (rd32(arg2 + edi * 4u + 4u) != 0u)
    {
        esi = rd32(arg2 + edi * 4u + 4u);
        edi = edi + 1u;
        goto L_1007b6bd;
    }
L_1007b6f5: ;
    return 0u;
L_1007b6e3: ;
    eax = -cf + 1u - cf;
    goto L_1007b6e8;
L_1007b6fc: ;
    return edi + 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007b6a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007b6a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
