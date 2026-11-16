/* f_0x102bca6b - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102bca6b(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    eax = 0u;
    ebx = in_ebx;
    esi = 0u;
L_102bca76: ;
    if ((int32_t)rd8(arg1 + esi + 0x11cu) < 41)
    {
        edx = rd8(arg1 + esi + 0x11cu);
        esi = esi + 1u;
        goto L_102bca9c;
    }
    edx = rd8(arg1 + esi + 0x11cu);
    esi = esi + 1u;
    if ((int32_t)edx > 122) goto L_102bca9c;
    if ((int32_t)edx <= 90) goto L_102bca97;
    if ((int32_t)edx < 97) goto L_102bca9c;
L_102bca97: ;
    wr8(arg2 + eax, (uint8_t)edx);
L_102bcac4: ;
    if ((int32_t)esi < 4)
    {
        eax = eax + 1u;
        goto L_102bca76;
    }
    eax = eax + 1u;
    if (arg3 != 0u)
    {
        wr8(arg2 + eax, 0x3au);
        wr8(arg2 + eax + 1u, 0x20u);
        t3 = arg2 + eax + 2u;
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x103169e0u), 5, t3, arg3, 0x40u, in_edi, in_esi);
        t4 = g->edx;
        wr8(t3 + 0x3fu, 0u);
        edx = t4;
    }
    else
    {
        wr8(arg2 + eax, 0u);
    }
    g->edx = edx;
    return;
L_102bca9c: ;
    wr8(arg2 + eax, 0x5bu);
    t1 = rd8(COW_IMG(0x10342dacu) + ((uint32_t)((int32_t)edx >> 4u) & 0xfu));
    wr8(arg2 + eax + 1u, (uint8_t)t1);
    t2 = rd8(COW_IMG(0x10342dacu) + (edx & 0xfu));
    wr8(arg2 + eax + 2u, (uint8_t)t2);
    wr8(arg2 + eax + 3u, 0x5du);
    eax = eax + 3u;
    edx = t2;
    ebx = (ebx & 0xffffff00u) | t1;
    goto L_102bcac4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bca6b(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102bca6b(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
