/* f_0x100ec140 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100ec140(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        esi = arg3 + 4u;
        edi = eax + 0x3bfd8u;
        ecx = 0x11u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        if (rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c130u) == 0u)
        {
            eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c130u);
            edx = in_edx;
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c130u);
            ecx = rd32(COW_IMG(0x104dfd98u));
            t1 = rd32(ecx + 0x3c134u);
            g->eax = eax;
            g->edx = ecx + 0x3bfd8u;
            g->esp = sp0;
            t2 = cow_thiscall_cdecl(g, eax, t1, 2, t1, ecx + 0x3bfd8u);
            t3 = g->edx;
            eax = t2;
            edx = t3;
        }
    }
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ec140(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ec140(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
