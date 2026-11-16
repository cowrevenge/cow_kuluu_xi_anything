/* f_0x100e5f30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100e5f30(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd8(arg3 + 4u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(arg3 + 4u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x104b1784u));
        ecx = self;
        edx = in_edx;
        esi = 0u;
        edi = arg3 + 8u;
L_100e5f48: ;
        if (eax != 0u)
        {
            t1 = (ecx & 0xffff0000u) | rd16(edi);
            g->esp = sp0 - 0xcu;
            cow_thiscall_cdecl(g, eax, t1, 1, t1);
            t2 = g->ecx;
            eax = rd32(COW_IMG(0x104b1784u));
            ecx = t2;
        }
        if ((int32_t)(esi + 1u) < (int32_t)rd8(arg3 + 4u))
        {
            edx = rd8(arg3 + 4u);
            esi = esi + 1u;
            edi = edi + 2u;
            goto L_100e5f48;
        }
        edx = rd8(arg3 + 4u);
    }
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e5f30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e5f30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
