/* f_0x10319ba4 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10319ba4(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x109f945cu)) != 0u)
    {
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, self, in_edx, 1, 3, 0x19u, in_edi, in_esi);
        t3 = g->edx;
        ecx = arg1;
        edx = t3;
        esi = 0u;
L_10319bcd: ;
        if ((rd8(COW_IMG(0x109f9561u) + rd8(ecx)) & 4u) == 0u)
        {
            eax = rd8(ecx);
            edx = (edx & 0xffffff00u) | rd8(ecx);
            goto L_10319bfc;
        }
        eax = rd8(ecx);
        edx = (edx & 0xffffff00u) | rd8(ecx);
        if (rd8(ecx + 1u) == 0u)
        {
            edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
            ecx = ecx + 1u;
            goto L_10319bf8;
        }
        edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
        ecx = ecx + 1u;
        if (arg2 != (eax << 8u | (uint8_t)edx))
        {
            eax = eax << 8u | (uint8_t)edx;
        }
        else
        {
            eax = eax << 8u | (uint8_t)edx;
            esi = ecx - 1u;
        }
L_10319c03: ;
        if ((uint8_t)edx != 0u)
        {
            ecx = ecx + 1u;
            goto L_10319bcd;
        }
        ecx = ecx + 1u;
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, ecx, edx, 1, 3, 0x19u, in_edi, in_esi);
        t4 = g->edx;
        eax = esi;
        edx = t4;
    }
    else
    {
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0;
        t1 = cow_thiscall_cdecl(g, COW_IMG(0x10312800u), self, 4, arg1, arg2, in_esi, in_ebp);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    g->edx = edx;
    return eax;
L_10319bf8: ;
    zf = esi == 0u;
L_10319bff: ;
    if (zf)
    {
        esi = ecx;
    }
    goto L_10319c03;
L_10319bfc: ;
    zf = arg2 == eax;
    goto L_10319bff;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10319ba4(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10319ba4(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
