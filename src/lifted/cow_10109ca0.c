/* f_0x10109ca0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10109ca0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(arg1) == 0u)
    {
        edi = arg1;
        goto L_10109d66;
    }
    eax = in_eax;
    ecx = self;
    edx = in_edx;
    ebx = (in_ebx & 0xffffff00u) | rd8(arg1);
    esi = arg1;
    edi = arg1;
L_10109cb3: ;
    if ((uint8_t)ebx != 0x5cu) goto L_10109d2e;
    if (rd8(esi + 1u) != 0x22u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 1u);
        goto L_10109cca;
    }
    eax = (eax & 0xffffff00u) | rd8(esi + 1u);
    wr8(edi, (uint8_t)eax);
    esi = esi + 2u;
    edi = edi + 1u;
L_10109d5c: ;
    if (rd8(esi) != 0u)
    {
        ebx = (ebx & 0xffffff00u) | rd8(esi);
        goto L_10109cb3;
    }
L_10109d66: ;
    wr8(edi, 0u);
    return;
L_10109cca: ;
    if ((uint8_t)eax != 0x6eu) goto L_10109cda;
    wr8(edi, 0xau);
    esi = esi + 2u;
    edi = edi + 1u;
    goto L_10109d5c;
L_10109cda: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x1031479cu), 1, (uint8_t)eax);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_10109d2e;
    }
    ecx = t2;
    edx = t3;
    t4 = rd8(esi + 2u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t5 = cow_cdecl(g, COW_IMG(0x1031479cu), 1, t4);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 == 0u)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        goto L_10109d2e;
    }
    edx = t7;
    t8 = rd8(esi + 3u);
    g->ecx = t8;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t9 = cow_cdecl(g, COW_IMG(0x1031479cu), 1, t8);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 == 0u)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        goto L_10109d2e;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
    t12 = rd8(esi + 3u);
    t13 = rd8(esi + 2u);
    t14 = rd8(esi + 1u);
    wr8(edi, (uint8_t)(t12 + (uint8_t)((uint8_t)(t13 + (uint8_t)(t14 << 3u)) * 8u + 0x50u)));
    edx = (edx & 0xffffff00u) | (uint8_t)(t12 + (uint8_t)((uint8_t)(t13 + (uint8_t)(t14 << 3u)) * 8u + 0x50u));
    ebx = (ebx & 0xffffff00u) | t12;
    esi = esi + 4u;
    edi = edi + 1u;
    goto L_10109d5c;
L_10109d2e: ;
    if ((int8_t)ebx >= 0) goto L_10109d52;
    if (rd8(esi + 1u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 1u);
        goto L_10109d52;
    }
    eax = (eax & 0xffffff00u) | rd8(esi + 1u);
    if (edi == esi) goto L_10109d4a;
    t15 = rd8(esi);
    wr8(edi, (uint8_t)t15);
    t16 = rd8(esi + 1u);
    wr8(edi + 1u, (uint8_t)t16);
    eax = (eax & 0xffffff00u) | t15;
    ecx = (ecx & 0xffffff00u) | t16;
    esi = esi + 1u;
    edi = edi + 1u;
L_10109d5a: ;
    esi = esi + 1u;
    edi = edi + 1u;
    goto L_10109d5c;
L_10109d4a: ;
    esi = esi + 2u;
    edi = edi + 2u;
    goto L_10109d5c;
L_10109d52: ;
    if (edi != esi)
    {
        t17 = rd8(esi);
        wr8(edi, (uint8_t)t17);
        edx = (edx & 0xffffff00u) | t17;
    }
    goto L_10109d5a;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10109ca0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10109ca0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
