/* f_0x100e5e80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100e5e80(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd8(arg3 + 4u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(arg3 + 4u);
        edx = in_edx;
    }
    else
    {
        edx = in_edx;
        ebx = in_ebx;
        ebp = 0u;
        esi = arg3 + 8u;
L_100e5e94: ;
        if (rd8(esi) != 0u)
        {
            eax = arg3 + 0x48u;
            ecx = 0u;
            edx = (edx & 0xffffff00u) | rd8(esi + 1u);
L_100e5ea1: ;
            if ((uint8_t)edx != rd8(eax + 1u)) goto L_100e5eb4;
            if (rd8(esi) != rd8(eax))
            {
                ebx = (ebx & 0xffffff00u) | rd8(esi);
                goto L_100e5eb4;
            }
            ebx = (ebx & 0xffffff00u) | rd8(esi);
            if (rd8(esi + 2u) == rd8(eax + 2u))
            {
                ebx = (ebx & 0xffffff00u) | rd8(esi + 2u);
                goto L_100e5ebf;
            }
            ebx = (ebx & 0xffffff00u) | rd8(esi + 2u);
L_100e5eb4: ;
            if ((int32_t)(ecx + 1u) < 16)
            {
                eax = eax + 4u;
                ecx = ecx + 1u;
                goto L_100e5ea1;
            }
            ecx = ecx + 1u;
L_100e5ec4: ;
            if (rd32(COW_IMG(0x104b177cu)) != 0u)
            {
                eax = rd32(COW_IMG(0x104b177cu));
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                cow_thiscall_cdecl(g, eax, ecx, 1, esi);
                t1 = g->edx;
                edx = t1;
            }
        }
L_100e5ed3: ;
        if ((int32_t)(ebp + 1u) < (int32_t)rd8(arg3 + 4u))
        {
            ebp = ebp + 1u;
            esi = esi + 4u;
            goto L_100e5e94;
        }
        eax = rd8(arg3 + 4u);
    }
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100e5ebf: ;
    if ((int32_t)ecx < 16) goto L_100e5ed3;
    goto L_100e5ec4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e5e80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e5e80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
