/* f_0x100dc2d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100dc2d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x104ae8acu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x104ae8acu));
        goto L_100dc2dd;
    }
    return in_eax & 0xffffff00u;
L_100dc2dd: ;
    if ((int32_t)(rd8(ecx + 0x1afc4u) + 1u & 0x80000003u) >= 0)
    {
        eax = rd8(ecx + 0x1afc4u);
        esi = rd8(ecx + 0x1afc4u) + 1u & 0x80000003u;
    }
    else
    {
        eax = rd8(ecx + 0x1afc4u);
        esi = rd8(ecx + 0x1afc4u) + 1u & 0x80000003u;
        esi = (esi - 1u | 0xfffffffcu) + 1u;
    }
    if (eax != esi)
    {
        edx = in_edx;
        ebp = rd32(COW_IMG(0x10329484u));
L_100dc302: ;
        if (rd8(ecx + esi * 0x6bf0u + 4u) != 2u)
        {
            eax = (esi * 0x6bf0u & 0xffffff00u) | rd8(ecx + esi * 0x6bf0u + 4u);
        }
        else
        {
            eax = (esi * 0x6bf0u & 0xffffff00u) | rd8(ecx + esi * 0x6bf0u + 4u);
            edi = ecx + esi * 0x6bf0u;
            g->eax = eax;
            g->esp = sp0 - 0xcu;
            t1 = cow_thiscall(g, ebp, rd32(edi), 1, rd32(edi));
            wr8(edi + 4u, 0u);
            eax = t1;
            ecx = rd32(COW_IMG(0x104ae8acu));
        }
        if ((int32_t)(esi + 1u & 0x80000003u) >= 0)
        {
            esi = esi + 1u & 0x80000003u;
        }
        else
        {
            esi = esi + 1u & 0x80000003u;
            esi = (esi - 1u | 0xfffffffcu) + 1u;
        }
        if (rd8(ecx + 0x1afc4u) != esi)
        {
            edx = rd8(ecx + 0x1afc4u);
            goto L_100dc302;
        }
    }
    wr32(COW_IMG(0x104ae8acu), 0u);
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100dc2d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100dc2d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
