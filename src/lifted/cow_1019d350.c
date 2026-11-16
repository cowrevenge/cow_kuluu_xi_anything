/* f_0x1019d350 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1019d350(Guest* g)
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

    if (rd8(COW_IMG(0x1037a1a0u)) == 0xffu)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x1037a1a0u));
        edx = in_edx;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x1037a1a0u));
        ecx = self;
        edx = in_edx;
        ebx = COW_IMG(0x1037a1a0u);
        ebp = COW_IMG(0x1037a1a0u);
        edi = self + 0x29u;
L_1019d36c: ;
        esi = 0u;
L_1019d36e: ;
        if (rd8(ebx + esi) == 0xffu)
        {
            eax = (eax & 0xffffff00u) | rd8(ebx + esi);
            goto L_1019d387;
        }
        eax = (eax & 0xffffff00u) | rd8(ebx + esi);
        t1 = (ecx & 0xffffff00u) | rd8(edi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t2 = cow_thiscall_cdecl(g, COW_IMG(0x10123650u), t1, 2, eax, t1);
        t3 = g->ecx;
        t4 = g->edx;
        if ((int32_t)(esi + 1u) < 4)
        {
            eax = t2;
            ecx = t3;
            edx = t4;
            esi = esi + 1u;
            goto L_1019d36e;
        }
        eax = t2;
        ecx = t3;
        edx = t4;
L_1019d387: ;
        if (rd8(ebp + 4u) != 0xffu)
        {
            eax = (eax & 0xffffff00u) | rd8(ebp + 4u);
            ebx = ebp + 4u;
            ebp = ebp + 4u;
            edi = edi + 1u;
            goto L_1019d36c;
        }
        eax = (eax & 0xffffff00u) | rd8(ebp + 4u);
    }
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x1019d320u), eax, self, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019d350(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1019d350(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
