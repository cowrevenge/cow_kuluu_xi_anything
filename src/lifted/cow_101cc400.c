/* f_0x101cc400 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101cc400(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc510u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        esi = t1;
        goto L_101cc410;
    }
    eax = t1;
    return eax & 0xffffff00u;
L_101cc410: ;
    g->esp = sp0 - 4u;
    t4 = cow_fastcall(g, COW_IMG(0x100fcdc0u), ecx, edx, 0);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        goto L_101cc41d;
    }
    eax = t4;
    return eax & 0xffffff00u;
L_101cc41d: ;
    if (rd16(esi + 0x210u) == 0u)
    {
        esi = esi + 0x7cu;
    }
    else
    {
        esi = esi + 0x214u;
    }
    ebx = in_ebx;
L_101cc433: ;
    if (rd8(eax) != rd8(esi))
    {
        cf = rd8(eax) < rd8(esi);
        goto L_101cc461;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    ebx = (ebx & 0xffffff00u) | rd8(esi);
    if ((uint8_t)ecx == 0u) goto L_101cc457;
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_101cc461;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    ebx = (ebx & 0xffffff00u) | rd8(esi + 1u);
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_101cc433;
    }
L_101cc457: ;
    return 1u;
L_101cc461: ;
    return (-cf + 1u - cf & 0xffffff00u) | -cf + 1u == cf;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cc400(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101cc400(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
