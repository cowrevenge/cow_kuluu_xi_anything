/* f_0x100841a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100841a0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x10085240u), g->eax, g->ecx, in_edx, 1, 0);
    t2 = g->edx;
    if (t1 == 0u) goto L_100841fd;
    edx = t2;
    edi = t1;
    ebx = in_ebx;
L_100841b3: ;
    g->eax = rd32(edi);
    g->edx = edx;
    t3 = rd32(edi);
    g->esp = sp0 - 0x10u;
    t4 = cow_thiscall(g, rd32(t3 + 0xccu), edi, 0);
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    esi = arg1;
L_100841bf: ;
    if (rd8(eax) != rd8(esi))
    {
        edx = (edx & 0xffffff00u) | rd8(eax);
        ebx = (ebx & 0xffffff00u) | rd8(esi);
        cf = rd8(eax) < rd8(esi);
        goto L_100841e7;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    ebx = (ebx & 0xffffff00u) | rd8(esi);
    if ((uint8_t)ecx == 0u) goto L_100841e3;
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        ebx = (ebx & 0xffffff00u) | rd8(esi + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_100841e7;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    ebx = (ebx & 0xffffff00u) | rd8(esi + 1u);
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_100841bf;
    }
L_100841e3: ;
    eax = 0u;
L_100841ec: ;
    if (eax == 0u) goto L_10084204;
    g->esp = sp0 - 0x10u;
    t7 = cow_fastcall(g, COW_IMG(0x10085270u), edi, edx, 0);
    t8 = g->edx;
    if (t7 != 0u)
    {
        edx = t8;
        edi = t7;
        goto L_100841b3;
    }
L_100841fd: ;
    return 0u;
L_100841e7: ;
    eax = -cf + 1u - cf;
    goto L_100841ec;
L_10084204: ;
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100841a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100841a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
