/* f_0x10319f33 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10319f33(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x109f945cu)) != 0u) goto L_10319f4f;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10322bf0u), self, 2, arg1, arg2);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_10319f4f: ;
    g->eax = in_eax;
    g->esp = sp0;
    t3 = cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, self, in_edx, 1, 3, 0x19u, in_esi, in_ebx);
    t4 = g->edx;
    if (rd8(arg1) == 0u)
    {
        eax = t3;
        ecx = 0x19u;
        edx = t4;
        esi = arg1;
    }
    else
    {
        edx = t4;
        ecx = 0x19u;
        esi = arg1;
L_10319f65: ;
        if (rd8(arg2) == 0u)
        {
            eax = arg2;
            goto L_10319f9a;
        }
        eax = arg2;
L_10319f6b: ;
        if ((rd8(COW_IMG(0x109f9561u) + rd8(eax)) & 4u) == 0u)
        {
            ecx = (ecx & 0xffffff00u) | rd8(eax);
            edx = rd8(eax);
            goto L_10319f91;
        }
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        edx = rd8(eax);
        if ((uint8_t)ecx != rd8(esi)) goto L_10319f85;
        if (rd8(eax + 1u) == rd8(esi + 1u))
        {
            ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
            goto L_10319f9a;
        }
L_10319f85: ;
        if (rd8(eax + 1u) == 0u)
        {
            ecx = eax + 1u;
            goto L_10319f9a;
        }
        ecx = eax + 1u;
        eax = ecx;
L_10319f95: ;
        if (rd8(eax + 1u) != 0u)
        {
            eax = eax + 1u;
            goto L_10319f6b;
        }
        eax = eax + 1u;
L_10319f9a: ;
        if (rd8(eax) != 0u) goto L_10319fb4;
        if ((rd8(COW_IMG(0x109f9561u) + rd8(esi)) & 4u) == 0u)
        {
            eax = rd8(esi);
            goto L_10319faf;
        }
        eax = rd8(esi);
        if (rd8(esi + 1u) == 0u)
        {
            esi = esi + 1u;
            goto L_10319fb4;
        }
        esi = esi + 1u;
L_10319faf: ;
        if (rd8(esi + 1u) != 0u)
        {
            esi = esi + 1u;
            goto L_10319f65;
        }
        esi = esi + 1u;
L_10319fb4: ;
    }
    g->eax = eax;
    g->esp = sp0;
    t5 = cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, ecx, edx, 1, 3, 0x19u, in_esi, in_ebx);
    t6 = g->edx;
    g->edx = t6;
    return -(rd8(esi) != 0u) & esi;
L_10319f91: ;
    if ((uint8_t)ecx == rd8(esi)) goto L_10319f9a;
    goto L_10319f95;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10319f33(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10319f33(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
