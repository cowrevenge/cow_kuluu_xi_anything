/* f_0x1022b5d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1022b5d0(Guest* g)
{
    uint32_t cf;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 == 0u)
    {
        eax = in_eax;
        goto L_1022b66b;
    }
    if (rd8(arg1) == 0u)
    {
        eax = in_eax;
        goto L_1022b66b;
    }
    if (rd32(COW_IMG(0x10667a74u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10667a74u));
        goto L_1022b66b;
    }
    ecx = self;
    edx = in_edx;
    ebx = 0u;
    ebp = 0u;
L_1022b5f6: ;
    if (rd16(ebp + rd32(COW_IMG(0x10667a74u))) == 0u)
    {
        eax = rd32(COW_IMG(0x10667a74u));
        goto L_1022b65f;
    }
    eax = rd32(COW_IMG(0x10667a74u));
    edi = ebp + rd32(COW_IMG(0x10667a74u));
    if ((uint8_t)arg2 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg2;
        goto L_1022b614;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)arg2;
    if (rd16(edi + 2u) == 6u) goto L_1022b65f;
L_1022b614: ;
    g->esp = sp0 - 0x14u;
    t1 = cow_call_regs(g, COW_IMG(0x1022bda0u), eax, ecx, edx, 1, 0);
    t2 = g->edx;
    g->ecx = t1;
    g->edx = t2;
    g->esp = sp0 - 0x10u;
    t3 = cow_stdcall(g, COW_IMG(0x1022bf00u), 1, ebx);
    t4 = g->ecx;
    t5 = g->edx;
    eax = t3;
    ecx = t4;
    edx = t5;
    esi = arg1;
L_1022b621: ;
    if (rd8(eax) != rd8(esi))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(esi);
        goto L_1022b645;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    if ((uint8_t)ecx == 0u) goto L_1022b641;
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_1022b645;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_1022b621;
    }
L_1022b641: ;
    eax = 0u;
L_1022b64a: ;
    if (eax != 0u) goto L_1022b65b;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t6 = cow_cdecl(g, COW_IMG(0x1022b7d0u), 5, edi, in_edi, in_esi, in_ebp, in_ebx);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint8_t)t6 != 0u)
    {
        eax = t6;
        goto L_1022b672;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
L_1022b65b: ;
L_1022b65f: ;
    if ((int32_t)(ebp + 0x64u) < 102400)
    {
        ebx = ebx + 1u;
        ebp = ebp + 0x64u;
        goto L_1022b5f6;
    }
L_1022b66b: ;
    return eax & 0xffffff00u;
L_1022b645: ;
    eax = -cf + 1u - cf;
    goto L_1022b64a;
L_1022b672: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022b5d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022b5d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
