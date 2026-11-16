/* f_0x10077ba0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10077ba0(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 != 0u) goto L_10077bb3;
    return 0u;
L_10077bb3: ;
    if (arg2 != 0u) goto L_10077bc1;
    return 0u;
L_10077bc1: ;
    if ((int8_t)rd8(arg1 + 5u) < 0)
    {
        ebx = 0u;
        goto L_10077c28;
    }
    eax = (in_eax & 0xffffff00u) | rd8(arg1 + 5u);
    ecx = self;
    edx = in_edx;
    edi = arg1;
L_10077bc9: ;
    if (rd8(edi + 4u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(edi + 4u);
        g->ecx = ecx;
        g->edx = edx;
        t1 = rd32(edi);
        g->esp = sp0 - 8u;
        t2 = cow_cdecl(g, COW_IMG(0x10312980u), 5, arg2, t1, (uint8_t)eax, in_esi, in_edi);
        t3 = g->ecx;
        t4 = g->edx;
        eax = t2;
        ecx = t3;
        edx = t4;
    }
    else
    {
        eax = arg2;
        esi = rd32(edi);
L_10077bd4: ;
        if (rd8(eax) != rd8(esi))
        {
            ecx = (ecx & 0xffffff00u) | rd8(eax);
            edx = (edx & 0xffffff00u) | rd8(eax);
            cf = rd8(eax) < rd8(esi);
            goto L_10077bf8;
        }
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        edx = (edx & 0xffffff00u) | rd8(eax);
        if ((uint8_t)ecx == 0u) goto L_10077bf4;
        if (rd8(eax + 1u) != rd8(esi + 1u))
        {
            ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
            edx = (edx & 0xffffff00u) | rd8(eax + 1u);
            cf = rd8(eax + 1u) < rd8(esi + 1u);
            goto L_10077bf8;
        }
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        if ((uint8_t)ecx != 0u)
        {
            eax = eax + 2u;
            esi = esi + 2u;
            goto L_10077bd4;
        }
L_10077bf4: ;
        eax = 0u;
    }
L_10077c11: ;
    if (eax == 0u) goto L_10077c26;
    if ((int8_t)rd8(edi + 0xdu) >= 0)
    {
        eax = (eax & 0xffffff00u) | rd8(edi + 0xdu);
        edi = edi + 8u;
        goto L_10077bc9;
    }
    return 0u;
L_10077bf8: ;
    eax = -cf + 1u - cf;
    goto L_10077c11;
L_10077c26: ;
    ebx = edi;
L_10077c28: ;
    return ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10077ba0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10077ba0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
