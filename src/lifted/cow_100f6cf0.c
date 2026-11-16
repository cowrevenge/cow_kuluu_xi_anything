/* f_0x100f6cf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100f6cf0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 == 0u)
    {
        edx = in_edx;
        goto L_100f6de0;
    }
    if (rd8(arg1) == 0u)
    {
        edx = in_edx;
        goto L_100f6de0;
    }
    eax = in_eax;
    ecx = self;
    edx = in_edx;
    ebp = 0u;
L_100f6d13: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x1030ff73u), 2, ebp, arg3);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_100f6d77;
    }
    edx = t3;
    if (!(rd32(arg3 + 0x98u) & 1u))
    {
        eax = rd32(arg3 + 0x98u) & 1u;
        ecx = 0u;
        goto L_100f6d77;
    }
    if ((uint8_t)arg2 != 0u) goto L_100f6d40;
    if ((rd32(arg3 + 8u) & 0x10000000u) != 0u)
    {
        eax = rd32(arg3 + 8u) & 0x10000000u;
        ecx = 0u;
        goto L_100f6d77;
    }
L_100f6d40: ;
    eax = arg3 + 0xa0u;
    ecx = 0u;
    esi = arg1;
L_100f6d46: ;
    if (rd8(eax) != rd8(esi))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(esi);
        goto L_100f6d6a;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    if ((uint8_t)ecx == 0u) goto L_100f6d66;
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_100f6d6a;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_100f6d46;
    }
L_100f6d66: ;
    eax = 0u;
L_100f6d6f: ;
    if (eax == 0u) goto L_100f6de7;
L_100f6d77: ;
    if ((int32_t)(ebp + 1u) < 200)
    {
        ebp = ebp + 1u;
        goto L_100f6d13;
    }
    ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg2;
    ebp = 0u;
L_100f6d82: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x1030ff89u), 2, ebp, arg3);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        goto L_100f6dda;
    }
    edx = t6;
    if (!(rd32(arg3 + 0x98u) & 1u))
    {
        eax = rd32(arg3 + 0x98u) & 1u;
        ecx = 0u;
        goto L_100f6dda;
    }
    eax = arg3 + 0xa0u;
    ecx = 0u;
    esi = arg1;
L_100f6da5: ;
    if (rd8(eax) != rd8(esi))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        edx = (edx & 0xffffff00u) | rd8(eax);
        ebx = (ebx & 0xffffff00u) | rd8(esi);
        cf = rd8(eax) < rd8(esi);
        goto L_100f6dcd;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    ebx = (ebx & 0xffffff00u) | rd8(esi);
    if ((uint8_t)ecx == 0u) goto L_100f6dc9;
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        ebx = (ebx & 0xffffff00u) | rd8(esi + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_100f6dcd;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    ebx = (ebx & 0xffffff00u) | rd8(esi + 1u);
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_100f6da5;
    }
L_100f6dc9: ;
    eax = 0u;
L_100f6dd2: ;
    if (eax == 0u) goto L_100f6de7;
L_100f6dda: ;
    if ((int32_t)(ebp + 1u) < 100)
    {
        ebp = ebp + 1u;
        goto L_100f6d82;
    }
L_100f6de0: ;
    g->edx = edx;
    return 0u;
L_100f6d6a: ;
    eax = -cf + 1u - cf;
    goto L_100f6d6f;
L_100f6dcd: ;
    eax = -cf + 1u - cf;
    goto L_100f6dd2;
L_100f6de7: ;
    g->edx = edx;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f6cf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f6cf0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
