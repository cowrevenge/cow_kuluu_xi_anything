/* f_0x100e46a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100e46a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_100e475f;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    g->eax = eax;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0xdcu, 1u, 1u);
    if (t1 == 0u)
    {
        eax = t1;
        goto L_100e475f;
    }
    eax = t1;
    wr32(eax + 4u, 0u);
    wr32(eax + 8u, 0u);
    wr32(eax + 0xcu, 0u);
    if (arg1 > 0xbu) goto L_100e475f;
    ecx = eax + 4u;
    t2 = rd32(COW_IMG(0x100e4764u) + arg1 * 4u);
    switch (t2 - RD)
    {
    case 0x100e46e7u: goto L_100e46e7;
    case 0x100e46ecu: goto L_100e46ec;
    case 0x100e46f1u: goto L_100e46f1;
    case 0x100e46f6u: goto L_100e46f6;
    case 0x100e4702u: goto L_100e4702;
    case 0x100e4708u: goto L_100e4708;
    case 0x100e470eu: goto L_100e470e;
    case 0x100e4716u: goto L_100e4716;
    case 0x100e471eu: goto L_100e471e;
    case 0x100e4726u: goto L_100e4726;
    case 0x100e475fu: goto L_100e475f;
    default: rt_fatal(g, COW_IMG(0x100e46e0u), "switch");
    }
    return 0;
L_100e46e7: ;
    wr8(ecx, rd8(ecx) | 4u);
    edx = arg1;
L_100e472f: ;
    if ((uint8_t)arg2 == 0u)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)arg2;
        goto L_100e474b;
    }
    ecx = (ecx & 0xffffff00u) | (uint8_t)arg2;
    wr8(eax + 0x10u, 1u);
    g->eax = eax;
    g->esp = sp0;
    t4 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, eax, 0x14u, 0u);
    return (t4 & 0xffffff00u) | 1u;
L_100e46ec: ;
    wr8(ecx, rd8(ecx) | 2u);
    edx = arg1;
    goto L_100e472f;
L_100e46f1: ;
    wr8(ecx, rd8(ecx) | 1u);
    edx = arg1;
    goto L_100e472f;
L_100e46f6: ;
    t3 = rd8(ecx);
    wr8(ecx, (t3 & 0xefu) | 8u);
    edx = (arg1 & 0xffffff00u) | (t3 & 0xefu) | 8u;
    goto L_100e472f;
L_100e4702: ;
    wr8(eax + 5u, rd8(eax + 5u) | 0x40u);
    edx = arg1;
    goto L_100e472f;
L_100e4708: ;
    wr8(eax + 5u, rd8(eax + 5u) | 0x80u);
    edx = arg1;
    goto L_100e472f;
L_100e470e: ;
    ecx = (ecx & 0xffffff00u) | rd8(eax + 7u) | 2u;
L_100e472c: ;
    wr8(eax + 7u, (uint8_t)ecx);
    edx = arg1;
    goto L_100e472f;
L_100e4716: ;
    ecx = (ecx & 0xffffff00u) | rd8(eax + 7u) | 4u;
    goto L_100e472c;
L_100e471e: ;
    ecx = (ecx & 0xffffff00u) | rd8(eax + 7u) | 8u;
    goto L_100e472c;
L_100e4726: ;
    ecx = (ecx & 0xffffff00u) | rd8(eax + 7u) | 0x20u;
    goto L_100e472c;
L_100e474b: ;
    wr8(eax + 0x10u, 2u);
    g->eax = eax;
    g->esp = sp0;
    t5 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, eax, 0x14u, 0u);
    return (t5 & 0xffffff00u) | 1u;
L_100e475f: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e46a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e46a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
