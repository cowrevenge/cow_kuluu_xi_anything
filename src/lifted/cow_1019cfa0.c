/* f_0x1019cfa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1019cfa0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    eax = in_eax;
    ecx = self;
    edx = in_edx;
    ebx = self + 0x29u;
    ebp = COW_IMG(0x1037a290u);
L_1019cfac: ;
    esi = 0u;
    edi = ebp;
L_1019cfb0: ;
    if (rd16(edi) == 0xffffu)
    {
        eax = (eax & 0xffff0000u) | rd16(edi);
        goto L_1019cfce;
    }
    eax = (eax & 0xffff0000u) | rd16(edi);
    t1 = (ecx & 0xffffff00u) | rd8(ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall_cdecl(g, COW_IMG(0x10123680u), t1, 2, eax, t1);
    t3 = g->ecx;
    t4 = g->edx;
    if ((int32_t)(esi + 1u) < 5)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        esi = esi + 1u;
        edi = edi + 2u;
        goto L_1019cfb0;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
L_1019cfce: ;
    if ((int32_t)(ebp + 0xau) < (int32_t)COW_IMG(0x1037a3b2u))
    {
        ebx = ebx + 1u;
        ebp = ebp + 0xau;
        goto L_1019cfac;
    }
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x1019d350u), eax, rd32(COW_IMG(0x10662770u)), edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019cfa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1019cfa0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
