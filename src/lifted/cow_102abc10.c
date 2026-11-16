/* f_0x102abc10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_102abc10(Guest* g)
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(sp0 + 0x14u);
    wr32(t1, 0xffffffffu);
    wr32(t1 + 4u, 0xffffffffu);
    wr32(t1 + 8u, 0xffffffffu);
    wr32(sp0 + 0x14u, arg1 - t1);
    eax = 0u;
    edx = arg1 - t1;
    esi = t1;
L_102abc3d: ;
    t2 = cow_divs(g, eax + 1u, 3u);
    t3 = cow_mods(g, eax + 1u, 3u);
    if (rd32(edx + esi) == rd32(arg2))
    {
        ecx = rd32(edx + esi);
        edx = rd32(arg1 + t3 * 4u);
        edi = eax + 1u;
        eax = rd32(arg2);
        goto L_102abc64;
    }
    ecx = rd32(edx + esi);
    edx = rd32(arg1 + t3 * 4u);
    edi = eax + 1u;
    eax = rd32(arg2);
    if (ecx == rd32(arg2 + 4u)) goto L_102abc64;
    if (ecx != rd32(arg2 + 8u)) goto L_102abc72;
L_102abc64: ;
    if (edx == eax) goto L_102abcc8;
    if (edx == rd32(arg2 + 4u)) goto L_102abcc8;
    if (edx == rd32(arg2 + 8u)) goto L_102abcc8;
L_102abc72: ;
    if (ecx == rd32(arg3))
    {
        eax = rd32(arg3);
        goto L_102abc87;
    }
    eax = rd32(arg3);
    if (ecx == rd32(arg3 + 4u)) goto L_102abc87;
    if (ecx != rd32(arg3 + 8u)) goto L_102abc95;
L_102abc87: ;
    if (edx == eax) goto L_102abcc0;
    if (edx == rd32(arg3 + 4u)) goto L_102abcc0;
    if (edx == rd32(arg3 + 8u)) goto L_102abcc0;
L_102abc95: ;
    if (ecx == rd32(arg4))
    {
        eax = rd32(arg4);
        goto L_102abcaa;
    }
    eax = rd32(arg4);
    if (ecx == rd32(arg4 + 4u)) goto L_102abcaa;
    if (ecx != rd32(arg4 + 8u)) goto L_102abcce;
L_102abcaa: ;
    if (edx == eax) goto L_102abcb8;
    if (edx == rd32(arg4 + 4u)) goto L_102abcb8;
    if (edx != rd32(arg4 + 8u)) goto L_102abcce;
L_102abcb8: ;
    wr32(esi, 2u);
L_102abcce: ;
    if ((int32_t)edi < 3)
    {
        eax = edi;
        esi = esi + 4u;
        goto L_102abc39;
    }
    return;
L_102abc39: ;
    edx = rd32(sp0 + 0x14u);
    goto L_102abc3d;
L_102abcc0: ;
    wr32(esi, 1u);
    goto L_102abcce;
L_102abcc8: ;
    wr32(esi, 0u);
    goto L_102abcce;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102abc10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102abc10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
