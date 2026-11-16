/* f_0x10129f80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10129f80(Guest* g)
{
    uint32_t t1;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 - 0x1bu > 0xb1u) goto L_10129ff1;
    t1 = rd32(COW_IMG(0x10129ff4u) + rd8(COW_IMG(0x1012a068u) + arg1 - 0x1bu) * 4u);
    switch (t1 - RD)
    {
    case 0x10129f9du: goto L_10129f9d;
    case 0x10129fa0u: goto L_10129fa0;
    case 0x10129fa3u: goto L_10129fa3;
    case 0x10129fa6u: goto L_10129fa6;
    case 0x10129fa9u: goto L_10129fa9;
    case 0x10129facu: goto L_10129fac;
    case 0x10129fafu: goto L_10129faf;
    case 0x10129fb2u: goto L_10129fb2;
    case 0x10129fb5u: goto L_10129fb5;
    case 0x10129fb8u: goto L_10129fb8;
    case 0x10129fbbu: goto L_10129fbb;
    case 0x10129fbeu: goto L_10129fbe;
    case 0x10129fc1u: goto L_10129fc1;
    case 0x10129fc4u: goto L_10129fc4;
    case 0x10129fc7u: goto L_10129fc7;
    case 0x10129fcau: goto L_10129fca;
    case 0x10129fcdu: goto L_10129fcd;
    case 0x10129fd0u: goto L_10129fd0;
    case 0x10129fd3u: goto L_10129fd3;
    case 0x10129fd6u: goto L_10129fd6;
    case 0x10129fd9u: goto L_10129fd9;
    case 0x10129fdcu: goto L_10129fdc;
    case 0x10129fdfu: goto L_10129fdf;
    case 0x10129fe2u: goto L_10129fe2;
    case 0x10129fe5u: goto L_10129fe5;
    case 0x10129fe8u: goto L_10129fe8;
    case 0x10129febu: goto L_10129feb;
    case 0x10129feeu: goto L_10129fee;
    case 0x10129ff1u: goto L_10129ff1;
    default: rt_fatal(g, COW_IMG(0x10129f96u), "switch");
    }
    return 0;
L_10129f9d: ;
    return (arg1 - 0x1bu & 0xffffff00u) | 0x54u;
L_10129fa0: ;
    return (arg1 - 0x1bu & 0xffffff00u) | 0x55u;
L_10129fa3: ;
    return (arg1 - 0x1bu & 0xffffff00u) | 0x6cu;
L_10129fa6: ;
    return (arg1 - 0x1bu & 0xffffff00u) | 0x56u;
L_10129fa9: ;
    return (arg1 - 0x1bu & 0xffffff00u) | 0x57u;
L_10129fac: ;
    return (arg1 - 0x1bu & 0xffffff00u) | 0x58u;
L_10129faf: ;
    return (arg1 - 0x1bu & 0xffffff00u) | 0x6eu;
L_10129fb2: ;
    return (arg1 - 0x1bu & 0xffffff00u) | 0x70u;
L_10129fb5: ;
    return (arg1 - 0x1bu & 0xffffff00u) | 0x71u;
L_10129fb8: ;
    return (arg1 - 0x1bu & 0xffffff00u) | 0x6du;
L_10129fbb: ;
    return (arg1 - 0x1bu & 0xffffff00u) | 0x59u;
L_10129fbe: ;
    return (arg1 - 0x1bu & 0xffffff00u) | 0x5au;
L_10129fc1: ;
    return (arg1 - 0x1bu & 0xffffff00u) | 0x5bu;
L_10129fc4: ;
    return (arg1 - 0x1bu & 0xffffff00u) | 0x5cu;
L_10129fc7: ;
    return (arg1 - 0x1bu & 0xffffff00u) | 0x5du;
L_10129fca: ;
    return (arg1 - 0x1bu & 0xffffff00u) | 0x5eu;
L_10129fcd: ;
    return (arg1 - 0x1bu & 0xffffff00u) | 0x5fu;
L_10129fd0: ;
    return (arg1 - 0x1bu & 0xffffff00u) | 0x60u;
L_10129fd3: ;
    return (arg1 - 0x1bu & 0xffffff00u) | 0x61u;
L_10129fd6: ;
    return (arg1 - 0x1bu & 0xffffff00u) | 0x62u;
L_10129fd9: ;
    return (arg1 - 0x1bu & 0xffffff00u) | 0x63u;
L_10129fdc: ;
    return (arg1 - 0x1bu & 0xffffff00u) | 0x64u;
L_10129fdf: ;
    return (arg1 - 0x1bu & 0xffffff00u) | 0x65u;
L_10129fe2: ;
    return (arg1 - 0x1bu & 0xffffff00u) | 0x66u;
L_10129fe5: ;
    return (arg1 - 0x1bu & 0xffffff00u) | 0x67u;
L_10129fe8: ;
    return (arg1 - 0x1bu & 0xffffff00u) | 0x68u;
L_10129feb: ;
    return (arg1 - 0x1bu & 0xffffff00u) | 0x69u;
L_10129fee: ;
    return (arg1 - 0x1bu & 0xffffff00u) | 0x6au;
L_10129ff1: ;
    return (arg1 - 0x1bu & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10129f80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10129f80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
