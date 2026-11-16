/* f_0x10203350 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10203350(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->eax = arg1;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), self, 1, arg1);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        goto L_102033ac;
    }
    eax = t1;
    edx = t2;
    edi = t1;
    ebx = in_ebx;
L_1020336b: ;
    ecx = edi + 2u;
    esi = arg2;
L_10203370: ;
    if (rd8(ecx) != rd8(esi))
    {
        eax = (eax & 0xffffff00u) | rd8(ecx);
        edx = (edx & 0xffffff00u) | rd8(ecx);
        ebx = (ebx & 0xffffff00u) | rd8(esi);
        cf = rd8(ecx) < rd8(esi);
        goto L_10203398;
    }
    eax = (eax & 0xffffff00u) | rd8(ecx);
    edx = (edx & 0xffffff00u) | rd8(ecx);
    ebx = (ebx & 0xffffff00u) | rd8(esi);
    if ((uint8_t)edx == 0u) goto L_10203394;
    if (rd8(ecx + 1u) != rd8(esi + 1u))
    {
        eax = (eax & 0xffffff00u) | rd8(ecx + 1u);
        edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
        ebx = (ebx & 0xffffff00u) | rd8(esi + 1u);
        cf = rd8(ecx + 1u) < rd8(esi + 1u);
        goto L_10203398;
    }
    eax = (eax & 0xffffff00u) | rd8(ecx + 1u);
    edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
    ebx = (ebx & 0xffffff00u) | rd8(esi + 1u);
    if ((uint8_t)edx != 0u)
    {
        ecx = ecx + 2u;
        esi = esi + 2u;
        goto L_10203370;
    }
L_10203394: ;
    ecx = 0u;
L_1020339d: ;
    if (ecx == 0u) goto L_102033b5;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_stdcall(g, COW_IMG(0x100e8c70u), 0);
    t4 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        edx = t4;
        edi = t3;
        goto L_1020336b;
    }
    edx = t4;
L_102033ac: ;
    g->edx = edx;
    return 0u;
L_10203398: ;
    ecx = -cf + 1u - cf;
    goto L_1020339d;
L_102033b5: ;
    g->edx = edx;
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10203350(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10203350(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
